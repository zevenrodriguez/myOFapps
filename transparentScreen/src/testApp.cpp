#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    x = ofGetViewportWidth() / 2;
    y = ofGetViewportHeight() / 2;
    radius = 100;
    
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    //ofBackground(ofRandom(255), ofRandom(255), ofRandom(255));
    
    ofCircle(x, y, radius);
    
    test = timeReady()
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

void testApp::timeReady(){
    
    if (ofGetElapsedTimeMillis() % 1000 == 0){
        
        return true;
    }

    
}