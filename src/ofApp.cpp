#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofEnableAntiAliasing();
	ofEnableSmoothing();
	fbo.allocate(ofGetWidth()*2, ofGetHeight()*2);
}

//--------------------------------------------------------------
void ofApp::update(){
	//generate some content
	fbo.begin();
	ofClear(0,0,0,255);
	ofSetCircleResolution(35);
	ofSetColor(255,0,0);
	ofFill();
	ofCircle(ofGetMouseX()*2,ofGetMouseY()*2,50);
	fbo.end();



	//Spout
	//spout.sendTexture(kitten.getTextureReference(), "kitten");
	//spout.sendTexture(snow.getTextureReference(), "snow");
	spout.sendTexture(fbo.getTextureReference(), "composition");
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofSetColor(255);
	//ofClear(0,0,0,255);
	fbo.draw(0,0,ofGetWidth(),ofGetHeight());

}

void ofApp::exit() {
	spout.exit();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
