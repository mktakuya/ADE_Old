#include "ofApp.h"
#include "Drawfigure.h"

#define OUTLINE 3
#define PIECES 120
#define XBOADER 600
#define YBOADER 300

//Decralation color parameters
float colorparam[4][3] = { {255, 206, 10}, {131, 255, 0}, {20, 246, 255}, {250, 0, 191} };

//Decralation Drawfigure instance to use locationJudgment2
Drawfigure judg;

//drawTriangle decralation
Drawfigure triangle;
ofVec2f TrianglePositionVector[PIECES][3];
ofVec2f TriangleDirectionVector[PIECES];
float gravity, friction;
int pattern[PIECES];


//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofEnableSmoothing();

	gravity = 0.07;
	friction = 0.999;

	for(int cnt = 0; cnt < PIECES; cnt++){
		for(int ct = 0; ct < 3; ct++){
			TrianglePositionVector[cnt][ct].x = ofRandom(XBOADER, ofGetWidth() - XBOADER);
			TrianglePositionVector[cnt][ct].y = ofRandom(YBOADER, ofGetHeight() - YBOADER);
			TriangleDirectionVector[cnt].x = ofRandom(-10, 10);
			TriangleDirectionVector[cnt].y = ofRandom(-10, 10);
			pattern[cnt] = ofRandom(0, 2);
		}
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < PIECES; i++){
		TriangleDirectionVector[i].x *= friction;
		TriangleDirectionVector[i].y *= friction;
		TriangleDirectionVector[i].y += gravity;

		for(int j = 0; j < 3; j++){
			TrianglePositionVector[i][j].x += TriangleDirectionVector[i].x;
			TrianglePositionVector[i][j].y += TriangleDirectionVector[i].y;

			if (judg.locationJudgment2(TrianglePositionVector[i][j].y, 'y') == 0){
				TriangleDirectionVector[i].x *= -0.9;
				TriangleDirectionVector[i].y *= -0.9;
			}
			else {
				TriangleDirectionVector[i].x *= judg.locationJudgment2(TrianglePositionVector[i][j].x, 'x');
				TriangleDirectionVector[i].y *= judg.locationJudgment2(TrianglePositionVector[i][j].y, 'y');
			}
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < PIECES; i++){
		ofPushMatrix();
		ofTranslate(TriangleDirectionVector[i].x, TriangleDirectionVector[i].y);
		triangle.drawTriangle(TrianglePositionVector[i][0].x, TrianglePositionVector[i][0].y, 
			TrianglePositionVector[i][1].x, TrianglePositionVector[i][1].y, TrianglePositionVector[i][2].x,
			TrianglePositionVector[i][2].y, OUTLINE, colorparam[i % 4], pattern[i], 127);
		ofPopMatrix();
	}
}
