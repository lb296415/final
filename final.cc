#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include <string>
//#include "gtest/gtest.h" 


using namespace std;

int countLine(string pName);
int countChar(string pName);

void main(string filename){
	if(filename == "")
	{
		countLine("Ohio University");
		countChar("Athens");
	}
return 0;
}


int countLine(string pName){
	int count = 0;
	cout << "XXX LINES" << endl;
	return count;
}


int countChar(string pName){
	int count = 0;
	cout << "XXX Characters" << endl;
	return count;	
}


