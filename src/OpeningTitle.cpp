#include "OpeningTitle.h"

ofRectangle rect;

//--------------------------------------------------------------
void OpeningTitle::setup(){
    ofBackground(0);
    ofSetFullscreen(true);
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    font.loadFont("Play-Regular.ttf", 80);
    rect = font.getStringBoundingBox("2014 TNCT School Festival", 0, 0);
    frame = 0;
}

//--------------------------------------------------------------
void OpeningTitle::update(){
    frame++;
    if (frame / 60.0 < 3) {
        message = "2014 TNCT School Festival";
        rect = font.getStringBoundingBox(message, 0, 0);
        fontX = ofGetWidth() / 2;
        fontY = ofGetHeight() / 2;
    }else if (frame / 60.0 < 3.5) {
        message = "";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else if (frame / 60.0 < 4.5) {
        message = "Dance Club";
        rect = font.getStringBoundingBox(message, 0, 0);
        fontX = ofGetWidth() / 2 - rect.width * 0.7;
        fontY = ofGetHeight() - rect.height / 2;
    }else if (frame / 60.0 < 5.0) {
        message = "";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else if (frame / 60.0 < 6.0) {
        message = "Art Club";
        rect = font.getStringBoundingBox(message, 0, 0);
        fontX = ofGetWidth() - rect.width * 0.7;
        fontY = rect.height / 2 + rect.height;
    }else if (frame / 60.0 < 6.5) {
        message = "";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else if (frame / 60.0 < 7.5) {
        message = "Josho";
        rect = font.getStringBoundingBox(message, 0, 0);
        fontX = ofGetWidth() - rect.width * 0.7;
        fontY = ofGetHeight() - rect.height / 2;
    }else if (frame / 60.0 < 8.0) {
        message = "";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else if (frame / 60.0 < 9.0) {
        message = "3";
        font.loadFont("Play-Regular.ttf", 120);
        rect = font.getStringBoundingBox(message, 0, 0);
        fontX = ofGetWidth() / 2;
        fontY = ofGetHeight() / 2;
    }else if (frame / 60.0 < 10.0) {
        message = "2";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else if (frame / 60.0 < 11.0) {
        message = "1";
        rect = font.getStringBoundingBox(message, 0, 0);
    }else {
        message = "";
        rect = font.getStringBoundingBox(message, 0, 0);
    }
}

//--------------------------------------------------------------
void OpeningTitle::draw(){
    ofSetColor(255, 255, 255);
    font.drawString(message, fontX - rect.width / 2.0, fontY);
}

//--------------------------------------------------------------
void OpeningTitle::keyPressed(int key){
    
}

//--------------------------------------------------------------
void OpeningTitle::keyReleased(int key){
    
}

//--------------------------------------------------------------
void OpeningTitle::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void OpeningTitle::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void OpeningTitle::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void OpeningTitle::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void OpeningTitle::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void OpeningTitle::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void OpeningTitle::dragEvent(ofDragInfo dragInfo){ 
    
}
