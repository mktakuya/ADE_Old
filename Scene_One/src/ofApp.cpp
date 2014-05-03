#include "ofApp.h"
#include "Drawfigure.h"

#define OUTLINE 3.5
#define N 3

Drawfigure circle, triangle, judg;
float colorparam[4][3] = { {255, 206, 10}, {131, 255, 0}, {20, 246, 255}, {250, 0, 191} };

//oneCircle declaration
float xCircleLocation, yCircleLocation;
float CircleAccelx, CircleAccely;

//oneTriangle declaration
float xTriangleLocation[3] = {70, 55, 75};
float yTriangleLocation[3] = {20, 40, 38};
float TriangleAccelx[3];
float TriangleAccely[3];

//oneTrapezoid declaration


//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);
	ofSetCircleResolution(64);
	ofEnableSmoothing();

	//oneCircle setup
	xCircleLocation = ofGetWidth() / 4.0;
	yCircleLocation = ofGetHeight() / 3.0;

	CircleAccelx = 55;
	CircleAccely = 60;

	//oneTriangle setup
	for (int i = 0; i < N; i++){
		TriangleAccelx[i] = 60 - (i + 1) * 10;
		TriangleAccely[i] = 20 + (i + 1) * 10;
	}
	
}

//--------------------------------------------------------------
void ofApp::update(){

	//oneCircle update
	xCircleLocation += CircleAccelx;
	yCircleLocation += CircleAccely;

	CircleAccelx *= judg.judgment(xCircleLocation, 'x');
	CircleAccely *= judg.judgment(yCircleLocation, 'y');


	//oneTriangle update
	for (int i = 0; i < N; i++){

		xTriangleLocation[i] += TriangleAccelx[i];
		yTriangleLocation[i] += TriangleAccely[i];

		TriangleAccelx[i] *= judg.judgment(xTriangleLocation[i], 'x');
		TriangleAccely[i] *= judg.judgment(yTriangleLocation[i], 'y');

	}

}	

//--------------------------------------------------------------
void ofApp::draw(){

	//oneCircle drawing
	circle.oneCircle(xCircleLocation, yCircleLocation, 50 + rand()%50, OUTLINE + 0.5, colorparam[rand() % 4]);
	circle.oneCircle(yCircleLocation, xCircleLocation, 50 + rand()%50, OUTLINE + 0.5, colorparam[rand() % 4]);

	//oneTriangle drawing
	triangle.oneTriangle(xTriangleLocation, yTriangleLocation, OUTLINE, colorparam[rand() % 4]);
	triangle.oneTriangle(yTriangleLocation, xTriangleLocation, OUTLINE, colorparam[rand() % 4]);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
