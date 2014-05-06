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
		ofFill();
		ofCircle(x, y, diameter);
		break;
	}

}

void Drawfigure::drawTriangle(float *x, float *y, float diff, float *color, int switcher) {

	switch(switcher){
	case 0:
		ofSetColor(color[0], color[1], color[2]);
		ofNoFill();
		ofSetLineWidth(diff);
		ofTriangle(x[0], y[0], x[1], y[1], x[2], y[2]);
		break;

	case 1:
		ofSetColor(color[0], color[1], color[2]);
		ofFill();
		ofTriangle(x[0], y[0], x[1], y[1], x[2], y[2]);
		break;
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