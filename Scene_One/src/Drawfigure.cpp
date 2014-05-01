#include "ofMain.h"
#include "Drawfigure.h"

void Drawfigure::oneCircle(float x, float y, float diameter, float diff, float *color) {

	ofSetColor(color[0], color[1], color[2]);
	ofCircle(x, y, diameter);
	ofSetColor(255);

	ofCircle(x, y, diameter - diff);

}

void Drawfigure::oneTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float *color) {

	ofSetLineWidth(3);
	ofSetColor(color[0], color[1], color[2]);
	ofNoFill();

	ofTriangle(x1, y1, x2, y2, x3, y3);

}

void Drawfigure::oneTrapezoid(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float diff, float *color) {

	ofSetColor(color[0], color[1], color[2]);
	ofNoFill();
	ofSetLineWidth(3);

	ofBeginShape();
		ofVertex(x1, y1);
		ofVertex(x2, y2);
		ofVertex(x3, y3);
		ofVertex(x4, y4);
	ofEndShape();

}

int frag = 0;

float Drawfigure::judgment(float location, char xy) {

	switch(xy){
		case 'x':

			if (location < 0 || location > ofGetWidth()) {
				frag = -1;
			}
			else {
				frag = 1;
			}

			break;

		case 'y':

			if (location < 0 || location > ofGetHeight()) {
				frag = -1;
			}

			else {
				frag = 1;
			}
			break;
	}

	return frag;
}