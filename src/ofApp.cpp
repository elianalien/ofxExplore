#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // About Auto complete
    // Curretry vscode intelisense for C++ has limitation.
    // Try to type m.set and you will see tons of functions and variables includes "set" keyword
    // 
    // more info here https://github.com/Microsoft/vscode-cpptools/issues/13
    // You can use "Peek Definition" feature instead
    MyClass m;
    // m.set
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    float time = ofGetElapsedTimef();

    genieCircles(time);
    
}

// genie circles
void ofApp::genieCircles(float time){
    for (int i = 0; i < 600; i++){
        ofSetColor(
            127 + 127 * sin(i * .02 + time),
            127 + 127 * sin(i * .021 + time),
            127 + 127 * sin(i * .022 + time));
        ofDrawCircle(
            ofGetWindowWidth()/2 + (100 * sin(i * .02 + time)),
            50 + i,
            (ofGetWidth()*0.03) * (1 + sin(i * .005 + time)) 
        );
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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