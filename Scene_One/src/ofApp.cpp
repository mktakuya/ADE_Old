#include "ofApp.h"
#include "Drawfigure.h"


#define N 5

Drawfigure circle, circle2;
float colorparam[4][3] = { {255, 238, 2}, {131, 255, 0}, {0, 246, 255}, {255, 0, 191} };
float xloc/*[N]= { ofGetWidth() / 2.0 }*/, yloc/*[5] = { ofGetHeight() / 2.0 }*/;
float speed_x/*[N] = {10.0, 3.0, 7.0, 40.0, 18.0}*/, speed_y/*[N] = {18.0, 40.0, 7.0, 3.0, 10.0}*/;

//--------------------------------------------------------------
void ofApp::setup(){

	//ofEnableAlphaBlending();
	ofBackground(255);
	ofSetCircleResolution(64);

	xloc = ofGetWidth() / 2.0;
	yloc = ofGetHeight() / 2.0;
	speed_x = 140;
	speed_y = 50;

}

//--------------------------------------------------------------
void ofApp::update(){

	//for(i = 0; i < N; i++){
		//xloc[i] += speed_x[i];
		//yloc[i] += speed_y[i];
	//}
	xloc += speed_x;
	yloc += speed_y;

	speed_x = speed_x * circle.judgment(xloc, speed_x, 'x');
	speed_y = speed_y * circle.judgment(yloc, speed_y, 'y');

	/*if (xloc < 0 || xloc > ofGetWidth()) {
		speed_x *= -1;
	}*/

	/*if (yloc < 0 || yloc > ofGetHeight()) {
		speed_y *= -1;
	}*/

	//for(i = 0; i < N; i++){
		//speed_x[i] = jud.judgment(xloc[i], speed_x[i], 'x');
		//speed_y[i] = jud.judgment(yloc[i], speed_y[i], 'y');
	//}
}

//--------------------------------------------------------------
void ofApp::draw(){

	circle.oneCircle(xloc, yloc, 50, 5, colorparam[rand() % 4]);
	circle2.oneCircle(yloc, xloc, 70, 5, colorparam[rand() % 4]);
	//circle[1].oneCircle(xloc[1], yloc[1], 80, 3, colorparam[rand() % 4]);
	//circle[2].oneCircle(xloc[2], yloc[2], 80, 3, colorparam[rand() % 4]);
	//circle[3].oneCircle(xloc[3], yloc[3], 80, 3, colorparam[rand() % 4]);
	//circle[4].oneCircle(xloc[4], yloc[4], 80, 3, colorparam[rand() % 4]);

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
