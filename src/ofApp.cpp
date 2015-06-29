#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    aviPlayer.loadSound("sounds/Avi Heart#03.aif");
    aviPlayer.setVolume(1.0f);
    aviPlayer.setMultiPlay(false);
    
    sofyPlayer.loadSound("sounds/Sofy Heart#01.aif");
    sofyPlayer.setVolume(1.0f);
    sofyPlayer.setMultiPlay(false);
    
    danPlayer.loadSound("sounds/Pedro Heart#05.aif");
    danPlayer.setVolume(1.0f);
    danPlayer.setMultiPlay(false);
    
    normPlayer.loadSound("sounds/Norm#02.aif");
    normPlayer.setVolume(1.0f);
    normPlayer.setMultiPlay(false);
    
    cout << "check the time\n";
    cout << ofGetElapsedTimef();
    scenesMap['scene0']= false;
    scenesMap['scene1']= false;
    scenesMap['scene2']= false;
    scenesMap['scene3']= false;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    int sceneTimes[4] = {0, 1500, 3000, 4500};
    int currentTime;
    
    currentTime = ofGetElapsedTimeMillis();
    
    cout << "check the time\n";
    cout << ofGetElapsedTimeMillis();
    cout << "\n";
}

//--------------------------------------------------------------
void ofApp::draw(){

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
