#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(true);
    //ofSetFullscreen(true);
    ofSetFrameRate(60);
    
    ofSetCircleResolution(64);
    
    sceneNumber = 0;
    
    scene0.setup();
    //scene1.setup();
    scene2.setup();
    //scene3.setup();
    scene4.setup();
    scene5.setup();
    scene6.setup();
    //scene7.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    switch (backgroundNumber) {
        case 0:
            backgroundR = 0;
            backgroundG = 0;
            backgroundB = 0;
            break;
        case 1:
            backgroundR = 255;
            backgroundG = 255;
            backgroundB = 255;
            break;
        case 2:
            backgroundR = 0;
            backgroundG = 255;
            backgroundB = 255;
            break;
        case 3:
            backgroundR = 255;
            backgroundG = 0;
            backgroundB = 255;
            break;
        case 4:
            backgroundR = 255;
            backgroundG = 212;
            backgroundB = 0;
            break;
    }
    
    switch (sceneNumber) {
        case 0:
            ofSetFrameRate(60);
            ofSetBackgroundAuto(false);
            ofSetColor(0, 0, 0, 23);
            ofRect(0, 0, ofGetWidth(), ofGetHeight());
            ofFill();
            scene0.update();
            break;
        case 1:
            ofSetFrameRate(60);
            ofBackground(128, 128, 128);
            ofSetBackgroundAuto(true);
            //scene1.update();
            break;
        case 2:
            ofSetFrameRate(60);
            //ofBackground(255);
            ofNoFill();
            ofSetBackgroundAuto(true);
            ofBackground(backgroundR, backgroundG, backgroundB);
            scene2.update();
            break;
        case 3:
            ofSetFrameRate(60);
            ofBackground(128, 128, 128);
            //scene3.update();
            break;
        case 4:
            ofSetFrameRate(60);
            ofBackground(255);
            ofFill();
            scene4.update();
            break;
        case 5:
            ofSetFrameRate(60);
            ofBackground(0);
            ofNoFill();
            scene5.update();
            break;
        case 6:
            ofSetFrameRate(45);
            ofBackground(255);
            ofSetBackgroundAuto(true);
            ofNoFill();
            scene6.update();
            break;
        case 7:
            ofSetFrameRate(60);
            ofBackground(128, 128, 128);
            //scene7.update();
            break;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    switch (sceneNumber) {
        case 0:
            scene0.draw();
            break;
        case 1:
            //scene1.draw();
            break;
        case 2:
            scene2.draw();
            break;
        case 3:
            //scene3.draw();
            break;
        case 4:
            scene4.draw();
            break;
        case 5:
            scene5.draw();
            break;
        case 6:
            scene6.draw();
            break;
        case 7:
            //scene7.draw();
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int prevBackgroundNumber = backgroundNumber;
    if (key == ' ') {
        while (1) {
            backgroundNumber = ofRandom(0, 5);
            if (backgroundNumber != prevBackgroundNumber) {
                break;
            }
        }
    }
    
    switch (key) {
        case '0':
            sceneNumber = 0;
            break;
        case '1':
            sceneNumber = 1;
            break;
        case '2':
            sceneNumber = 2;
            break;
        case '3':
            sceneNumber = 3;
            break;
        case '4':
            sceneNumber = 4;
            break;
        case '5':
            sceneNumber = 5;
            break;
        case '6':
            sceneNumber = 6;
            break;
        case '7':
            sceneNumber = 7;
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
