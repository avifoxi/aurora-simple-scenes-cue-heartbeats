#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    iterator = 0;
    aviPlayer.loadSound("sounds/Avi Heart#03.aif");
    aviPlayer.setVolume(1.0f);
    aviPlayer.setMultiPlay(false);
    aviPlayer.setPosition(0.1);
    
    sofyPlayer.loadSound("sounds/Sofy Heart#01.aif");
    sofyPlayer.setVolume(1.0f);
    sofyPlayer.setMultiPlay(false);
    sofyPlayer.setPosition(0.5);
    
    danPlayer.loadSound("sounds/Pedro Heart#05.aif");
    danPlayer.setVolume(1.0f);
    danPlayer.setMultiPlay(false);
    
    normPlayer.loadSound("sounds/Norm#02.aif");
    normPlayer.setVolume(1.0f);
    normPlayer.setMultiPlay(false);
    
    cout << "check the time\n";
    cout << ofGetElapsedTimef();
    
    scenesMap[0]= false;
    scenesMap[1]= false;
    scenesMap[2]= false;
    scenesMap[3]= false;
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    int sceneTimes[4] = {0, 1500, 3000, 4500};
    int currentTime;
    
    currentTime = ofGetElapsedTimeMillis();
    
    if (currentTime >= sceneTimes[iterator] && scenesMap[iterator] == false){
        scenesMap[iterator] = true;
        switch (iterator) {
            case 0:
                playScene0();
                break;
                
            case 1:
                playScene1();
                break;
            case 2:
                playScene2();
                break;
            case 3:
                playScene3();
                break;
            default:
                break;
        }
        
        iterator++;
    }
}

void ofApp::playScene0(){
    cout << "scene 0 player \n";
    sofyPlayer.play();
}

void ofApp::playScene1(){
    cout << "scene 1 player \n";
    danPlayer.play();
}

void ofApp::playScene2(){
    cout << "scene 2 player \n";
    aviPlayer.play();
}

void ofApp::playScene3(){
    cout << "scene 3 player \n";
    normPlayer.play();
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
