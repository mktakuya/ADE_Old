#include "ofApp.h"
#include "Drawfigure.h"

#define OUTLINE 3.5
#define N 5

Drawfigure circle, judg;
float colorparam[4][3] = { {255, 206, 10}, {131, 255, 0}, {20, 246, 255}, {255, 0, 191} };
//oneCircle
float xCircleLocation, yCircleLocation; //x, yの始点
float accelx, accely; //移動速度

//oneTriangle
float xTraingleLocation[3][3], yTriangleLocation[3][3];

//oneTrapezoid


//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(255);
	ofSetCircleResolution(64);

	//oneCircle
	xCircleLocation = ofGetWidth() / 4.0;//始点のx座標を定義
	yCircleLocation = ofGetHeight() / 3.0;//始点のy座標を定義

	accelx = 110;//速度を定義
	accely = 120;//速度を定義

	//oneTriangle

}

//--------------------------------------------------------------
void ofApp::update(){

	//oneCircle
	xCircleLocation += accelx;
	yCircleLocation += accely;

	accelx *= judg.judgment(xCircleLocation, 'x');
	accely *= judg.judgment(yCircleLocation, 'y');

	//oneTriangle

}

//--------------------------------------------------------------
void ofApp::draw(){

	//oneCircle
	circle.oneCircle(xCircleLocation, yCircleLocation, 50 + rand()%50, OUTLINE, colorparam[rand() % 4]);
	circle.oneCircle(yCircleLocation, xCircleLocation, 50 + rand()%50, OUTLINE, colorparam[rand() % 4]);

	//oneTriangle
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
