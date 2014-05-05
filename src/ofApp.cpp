#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetFullscreen(true);
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
    switch (sceneNumber) {
        case 0:
            ofBackground(0);
            ofFill();
            scene0.update();
            break;
        case 1:
            //scene1.update();
            break;
        case 2:
            ofBackground(255);
            ofNoFill();
            scene2.update();
            break;
        case 3:
            //scene3.update();
            break;
        case 4:
            ofBackground(255);
            ofFill();
            scene4.update();
            break;
        case 5:
            ofBackground(0);
            ofNoFill();
            scene5.update();
            break;
        case 6:
            ofBackground(255);
            ofFill();
            scene6.update();
            break;
        case 7:
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
