#include "ofMain.h"
#include "ofApp.h"
#include <iostream>

using namespace std;

//========================================================================
int main( ){
	ofSetupOpenGL(1024,1048,OF_WINDOW);			// <-------- setup the GL context
	
	cout << "Hello from main" << endl;
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
