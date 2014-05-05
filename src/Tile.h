#pragma once

#include "ofMain.h"

#define TILE_NUM 6

class Tile : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    int frame;
    int tileX[TILE_NUM] = {0};
    int tileY[TILE_NUM] = {0};
    int tileWidth;
    int tileHeight;
    int tileR[TILE_NUM];
    int tileG[TILE_NUM];
    int tileB[TILE_NUM];
};
