/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on December 4, 2018, 11:43 AM
 * Purpose:  2D Array Color and Card combine
 */

//System Libraries Here
#include <iostream>
#include  <fstream>
#include <cstring>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int SIZEN=9;//1-9 for the number of cards
const int SIZEC=4;//Red, Blue,Green,Yellow for the color of the card
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num[SIZEN]={1,2,3,4,5,6,7,8,9};//1-9 card numbers
    string color[SIZEC]={"Red","Blue","Green","Yellow"};//4 card colors
    
    for(int i=0;i<SIZEC;i++){
        cout<<color[i]<<endl;
    }
    for(int j=0;j<SIZEN;j++){
        cout<<num[j]<<endl;
    }
    
    cout<<"Test hand 1: "<<color[2]<<" "<<num[5]<<endl;
    
    
    //Exit
    return 0;
}