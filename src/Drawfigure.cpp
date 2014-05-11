#include "ofMain.h"
#include "Drawfigure.h"

void Drawfigure::drawCircle(float x, float y, float diameter, float diff, float *color, int switcher) {

	switch(switcher){
	case 0:
		ofSetColor(color[0], color[1], color[2]);
		ofNoFill();
		ofSetLineWidth(diff);
		ofCircle(x, y, diameter);
		break;

	case 1:
		ofSetColor(color[0], color[1], color[2]);
		ofCircle(x, y, diameter);
		break;
	}

}

void Drawfigure::drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float diff, float *color, int switcher, int alpha) {
	if (switcher == 0){
		ofSetColor(color[0], color[1], color[2]);
		ofNoFill();
		ofSetLineWidth(diff);
		ofTriangle(x1, y1, x2, y2, x3, y3);
	}

	else{
		ofSetColor(255);
		ofNoFill();
		ofSetLineWidth(diff);
		ofTriangle(x1, y1, x2, y2, x3, y3);
		ofSetColor(color[0], color[1], color[2], alpha);
		ofFill();
		ofTriangle(x1, y1, x2, y2, x3, y3);
		
	}
}

int frag = 0;

float Drawfigure::locationJudgment(float location, char xy) {
	switch(xy){
	case 'x':
		if (location < 0 || location > ofGetWidth()) {
			frag = -1;
		}
		else{
			frag = 1;
		}
		break;

	case 'y':
		if (location < 0 || location > ofGetHeight()) {
			frag = -1;
		}
		else{
			frag = 1;
		}
		break;
	}
	return frag;
}

float Drawfigure::locationJudgment2(float location, char xy){
	switch(xy){
	case 'x':
		if (location < 0 || location > ofGetWidth()) {
			frag = -1;
		}
		else{
			frag = 1;
		}
		break;

	case 'y':
		if (location < 0) {
			frag = -1;
		}
		else if (location > ofGetHeight()) {
			frag = 0;
		}
		else{
			frag = 1;
		}
		break;
	}
	return frag;
}