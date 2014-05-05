#include "Tile.h"
int colorFlag[TILE_NUM] = {-1};

//--------------------------------------------------------------
void Tile::setup(){
    ofFill();
    tileWidth = 350;
    tileHeight = 450;
    frame = 0;
    for (int i = 0; i < TILE_NUM; i++) {
        colorFlag[i] = ofRandom(0, 4);
    }
    
    for (int i = 0; i < TILE_NUM; i++) {
        colorFlag[i] = ofRandom(0, 4);
        
        if (i > 0) {
            while (colorFlag[i] == colorFlag[i - 1] || colorFlag[i] == colorFlag[i - 3]) {
                colorFlag[i] = ofRandom(0, 4);
            }
        }
        
        switch(colorFlag[i]) {
            case 0:
                tileR[i] = 0;
                tileG[i] = 255;
                tileB[i] = 255;
                break;
            case 1:
                tileR[i] = 255;
                tileG[i] = 0;
                tileB[i] = 255;
                break;
            case 2:
                tileR[i] = 255;
                tileG[i] = 212;
                tileB[i] = 0;
                break;
            case 3:
                tileR[i] = 124;
                tileG[i] = 252;
                tileB[i] = 0;
                break;
        }
        
        if (i < 3) {
            tileX[i] = tileWidth * i + 10 * i;
            tileY[i] = 0;
        } else {
            if (i == 3) {
                tileX[i] = 0;
            } else {
                tileX[i] = tileWidth * (i - 3) + 10 * (i - 3);
            }
            tileY[i] = tileHeight + 10;
        }
    }
}

//--------------------------------------------------------------
void Tile::update(){
    frame++;
    if (frame % 30 == 0) {
        for (int i = 0; i < TILE_NUM; i++) {
            colorFlag[i] = ofRandom(0, 4);
            
            if (i > 0) {
                while (colorFlag[i] == colorFlag[i - 1] || colorFlag[i] == colorFlag[i - 3]) {
                    colorFlag[i] = ofRandom(0, 4);
                }
            }
            
            switch(colorFlag[i]) {
                case 0:
                    tileR[i] = 0;
                    tileG[i] = 255;
                    tileB[i] = 255;
                    break;
                case 1:
                    tileR[i] = 255;
                    tileG[i] = 0;
                    tileB[i] = 255;
                    break;
                case 2:
                    tileR[i] = 255;
                    tileG[i] = 212;
                    tileB[i] = 0;
                    break;
                case 3:
                    tileR[i] = 124;
                    tileG[i] = 252;
                    tileB[i] = 0;
                    break;
            }
            
            if (i < 3) {
                tileX[i] = tileWidth * i + 10 * i;
                tileY[i] = 0;
            } else {
                if (i == 3) {
                    tileX[i] = 0;
                } else {
                    tileX[i] = tileWidth * (i - 3) + 10 * (i - 3);
                }
                tileY[i] = tileHeight + 10;
            }
        }
    }
}

//--------------------------------------------------------------
void Tile::draw(){
    for (int i = 0; i < TILE_NUM; i++) {
        ofSetColor(tileR[i], tileG[i], tileB[i]);
        ofRect(tileX[i], tileY[i], tileWidth, tileHeight);
    }
}

//--------------------------------------------------------------
void Tile::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Tile::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Tile::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Tile::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Tile::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Tile::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Tile::dragEvent(ofDragInfo dragInfo){
    
}
