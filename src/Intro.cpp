#include "Intro.h"
#include "Drawfigure.h"

#define OUTLINE 3
#define PARTICLES 30

Drawfigure judg;
float colorparam[4][3] = { {255, 206, 10}, {131, 255, 0}, {20, 246, 255}, {250, 0, 191} };

//oneCircle declaration
Drawfigure circle;
ofVec2f CirclePositionVector[PARTICLES];
ofVec2f CircleDirectionVector[PARTICLES];
int diameter[PARTICLES];
int pattern[PARTICLES];
float t = 1;


//--------------------------------------------------------------
void Intro::setup(){

	ofBackground(255);
	ofSetCircleResolution(64);
	ofEnableSmoothing();

	//oneCircle setup
	for(int i = 0; i < PARTICLES; i++){
		CirclePositionVector[i].x = ofRandom(ofGetWidth());
		CirclePositionVector[i].y = ofRandom(ofGetHeight());
		CircleDirectionVector[i].x = ofRandom(-20, 20);
		CircleDirectionVector[i].y = ofRandom(-20, 20);
		diameter[i] = ofRandom(20, 80);
		pattern[i] = ofRandom(0, 2);
	}
	
}

//--------------------------------------------------------------
void Intro::update(){

	//oneCircle update
	for(int i = 0; i < PARTICLES; i++){
		CirclePositionVector[i].x += CircleDirectionVector[i].x;
		CirclePositionVector[i].y += CircleDirectionVector[i].y;
		CircleDirectionVector[i].x *=judg.locationJudgment(CirclePositionVector[i].x, 'x');
		CircleDirectionVector[i].y *=judg.locationJudgment(CirclePositionVector[i].y, 'y');
	}
	
}	

//--------------------------------------------------------------
void Intro::draw(){
	
	//oneCircle drawing
	for(int i = 0; i < PARTICLES; i++){
		circle.drawCircle(CirclePositionVector[i].x, CirclePositionVector[i].y, diameter[i], OUTLINE, colorparam[i % 4], pattern[i]);
	}

}

