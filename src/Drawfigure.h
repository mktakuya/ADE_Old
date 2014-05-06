#pragma once

class Drawfigure {

	public:
		void drawCircle(float x, float y, float diameter, float diff, float *color, int switcher);
		void drawTriangle(float *x, float *y, float diff, float *color, int switcher);
		float locationJudgment(float location, char xy);

		int frag;
};
