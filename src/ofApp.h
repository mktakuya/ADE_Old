#pragma once

#include "ofMain.h"
#include "OpeningTitle.h"
#include "Triangles.h"
#include "Bubbles.h"
#include "Tile.h"

class ofApp : public ofBaseApp{
    
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
    
    int sceneNumber;
    
    int backgroundNumber;
    int backgroundR;
    int backgroundG;
    int backgroundB;
    
    OpeningTitle scene0; // Opening Title
    // HogeClass scene1; // イントロ
    Bubbles scene2; // Aメロ
    // Lines scene3; // Bメロ
    Tile scene4; // サビ
    Triangles scene5; // Cメロ
    Bubbles scene6; // ラストサビ前半
    // HogeClass scene7; // ラストサビ後半
};
