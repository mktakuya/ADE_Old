#pragma once

class Drawfigure {

	public:
		void oneCircle(float x, float y, float diameter, float diff, float *color);
		void oneTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float *color);
		void oneTrapezoid(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float diff, float *color);

		float judgment(float location, char xy);

		int frag;
};
