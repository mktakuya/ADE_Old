#pragma once

#include "ofMain.h"

class Drawfigure {

	public:
		void drawCircle(float x, float y, float diameter, float diff, float *color, int switcher);
		void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float diff, float *color, int switcher, int alpha);
		float locationJudgment(float location, char xy);
		float locationJudgment2(float location, char xy);

		int frag;
};
