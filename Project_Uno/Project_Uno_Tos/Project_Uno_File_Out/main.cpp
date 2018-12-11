/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on December 4, 2018, 11:43 AM
 * Purpose:  File out 
 */

//System Libraries Here
#include <iostream>
#include  <fstream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string line;
    fstream inputFile;
    //open file
    inputFile.open("Rules.dat");
    if(inputFile.is_open()){
        while(getline(inputFile,line)){
            cout<<line<<"\n";
        }
        inputFile.close();
    }
    
    //Exit
    return 0;
}

