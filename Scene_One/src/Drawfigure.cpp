#include "ofMain.h"
#include "Drawfigure.h"

void Drawfigure::oneCircle(float x, float y, float diameter, float diff, float *color) {

	ofSetColor(color[0], color[1], color[2]);
	ofNoFill();
	ofSetLineWidth(diff);
	ofCircle(x, y, diameter);

}

void Drawfigure::oneTriangle(float *x, float *y, float diff, float *color) {

	ofSetColor(color[0], color[1], color[2]);
	ofNoFill();
	ofSetLineWidth(diff);

	ofTriangle(x[0], y[0], x[1], y[1], x[2], y[2]);

}

void Drawfigure::oneTrapezoid(float *x, float *y, float diff, float *color) {

	ofSetColor(color[0], color[1], color[2]);
	ofNoFill();
	ofSetLineWidth(diff);

	ofBeginShape();
		ofVertex(x[0], y[0]);
		ofVertex(x[1], y[1]);
		ofVertex(x[2], y[2]);
		ofVertex(x[3], y[3]);
	ofEndShape();

}

int frag = 0;

float Drawfigure::judgment(float location, char xy) {

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