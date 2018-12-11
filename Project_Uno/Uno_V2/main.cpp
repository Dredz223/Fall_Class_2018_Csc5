/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on October 4th, 2018 2:50PM
 * Purpose:  Uno Project_V2
 *         
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <stdlib.h> //Random Library
#include <cstring>  //String Library
#include <ctime>    //Time Library
#include <fstream>  //Stream Library 

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
string getColr();
string getCard();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string player1,player2,player3,player4;
    cout<<"This is a game of UNO!"<<endl;
    cout<<"Enter the names of the 4 players!"<<endl;
    cin>>player1>>player2>>player3>>player4;
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<getColr()<<endl;
    //Exit program!
    return 0;
}
string getColr(){
    //Declare Variables
    fstream in;
    string color;
    int nLines;
    //Initialize Variables 
    in.open("color.dat");
    nLines=rand()%4+1;//Possible of 4 colors Red,Green,Blue,Yellow
    //Look through file and choose random color
    for(int line=1;line<=nLines;line++){
        in>>color;
    }
    //close file
    in.close();
    //Return the random color
    return color;
}