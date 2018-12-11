/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on December 4, 2018, 11:43 AM
 * Purpose:  2D Array Color and Card combine
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
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
    //Declare random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int num[SIZEN]={1,2,3,4,5,6,7,8,9};
    char color[SIZEC];
    
    //Exit
    return 0;
}
