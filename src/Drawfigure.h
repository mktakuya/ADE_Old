#pragma once

class Drawfigure {
    
public:
    void oneCircle(float x, float y, float diameter, float diff, float *color);
    void oneTriangle(float *x, float *y, float diff, float *color);
    void oneTrapezoid(float *x, float *y, float diff, float *color);
    
    float judgment(float location, char xy);
    
    int frag;
};
