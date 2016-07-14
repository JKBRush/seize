#include "ofApp.h"

int nrOfCircle = 1;
float rotation = 0;
float rotationSteps = 0.01;
float lastSwitch;
bool closing;
bool opening;

void ofApp::setup(){
    
    ofBackground(0, 0, 0, 253);
    ofSetFrameRate(60);
    ofSetVerticalSync(false);
    lastSwitch = ofGetElapsedTimef();
    
    closing = false;
    opening = true;
    rotationSteps = 0.4;
    
    

}


void ofApp::update(){
    
    rotation += rotationSteps;

}


void ofApp::draw(){

}


void ofApp::keyPressed(int key){}
void ofApp::keyReleased(int key){}
void ofApp::mouseMoved(int x, int y ){}
void ofApp::mouseDragged(int x, int y, int button){}
void ofApp::mousePressed(int x, int y, int button){}
void ofApp::mouseReleased(int x, int y, int button){}
