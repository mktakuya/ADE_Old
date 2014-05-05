#include "Triangles.h"
#include "Drawfigure.h"

#define OUTLINE 2
#define N 3

Drawfigure circle, triangle, judg;
float colorparam[4][3] = { {255, 206, 10}, {131, 255, 0}, {20, 246, 255}, {250, 0, 191} };

//oneCircle declaration
float xCircleLocation, xCircleLocation2, yCircleLocation, yCircleLocation2;
float CircleAccelx, CircleAccelx2, CircleAccely, CircleAccely2;

//oneTriangle declaration
float xTriangleLocation[2][3];
float yTriangleLocation[2][3];
float TriangleAccelx[3];
float TriangleAccely[3];

//oneTrapezoid declaration


//--------------------------------------------------------------
void Triangles::setup(){
    
	ofBackground(0);
	ofSetCircleResolution(64);
	ofEnableSmoothing();
    
	//oneCircle setup
	xCircleLocation = ofGetWidth() / 2.0;
	yCircleLocation = ofGetHeight() / 2.0;
    
	CircleAccelx = 10;
	CircleAccely = 25;
	CircleAccelx2 = CircleAccely;
	CircleAccely2 = CircleAccelx;
    
	//oneTriangle setup
	for (int i = 0; i < N; i++){
		xTriangleLocation[0][i] = ofGetWidth() / 2.0;
		TriangleAccelx[i] = 40 - (i + 1) * 10 ;
		yTriangleLocation[0][i] = ofGetHeight() / 2.0;
		TriangleAccely[i] = 20 + (i + 1) * 10;
	}
	
}

//--------------------------------------------------------------
void Triangles::update(){
    
	ofBackground(0);
    
	//oneCircle update
	xCircleLocation += CircleAccelx;
	xCircleLocation2 += CircleAccelx2;
	yCircleLocation += CircleAccely;
	yCircleLocation2 += CircleAccely2;
    
	CircleAccelx *= judg.judgment(xCircleLocation, 'x');
	CircleAccelx2 *= judg.judgment(xCircleLocation2, 'x');
	CircleAccely *= judg.judgment(yCircleLocation, 'y');
	CircleAccely2 *= judg.judgment(yCircleLocation2, 'y');
    
	//oneTriangle update
	for (int i = 0; i < N; i++){
        
		xTriangleLocation[0][i] += TriangleAccelx[i];
		yTriangleLocation[0][i] += TriangleAccely[i];
		xTriangleLocation[1][i] = (ofGetWidth() / 2.0 - xTriangleLocation[0][i]) * 2 + xTriangleLocation[0][i];
		yTriangleLocation[1][i] = (ofGetHeight() / 2.0 - yTriangleLocation[0][i]) * 2 + yTriangleLocation[0][i];
        
		TriangleAccelx[i] *= judg.judgment(xTriangleLocation[0][i], 'x');
		TriangleAccely[i] *= judg.judgment(yTriangleLocation[0][i], 'y');
        
	}
    
    
}	

//--------------------------------------------------------------
void Triangles::draw(){
    
	//oneCircle drawing
	circle.oneCircle(xCircleLocation, yCircleLocation, 70, OUTLINE + 0.5, colorparam[rand() % 4]);
	circle.oneCircle((ofGetWidth() / 2.0 - xCircleLocation) * 2 + xCircleLocation, (ofGetHeight() / 2.0 - yCircleLocation) * 2 + yCircleLocation, 80, OUTLINE + 0.5, colorparam[rand() % 4]);
	circle.oneCircle(xCircleLocation2, yCircleLocation2, 70, OUTLINE + 0.5, colorparam[rand() % 4]);
	circle.oneCircle((ofGetWidth() / 2.0 - xCircleLocation2) * 2 + xCircleLocation2, (ofGetHeight() / 2.0 - yCircleLocation2) * 2 + yCircleLocation2, 90, OUTLINE + 0.5, colorparam[rand() % 4]);
    
	//oneTriangle drawing
	triangle.oneTriangle(xTriangleLocation[0], yTriangleLocation[0], OUTLINE, colorparam[rand() % 4]);
	triangle.oneTriangle(xTriangleLocation[1], yTriangleLocation[1], OUTLINE, colorparam[rand() % 4]);
    
}

//--------------------------------------------------------------
void Triangles::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Triangles::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Triangles::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void Triangles::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Triangles::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Triangles::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Triangles::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Triangles::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Triangles::dragEvent(ofDragInfo dragInfo){
    
}
