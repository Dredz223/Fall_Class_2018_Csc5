/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 1, 2018, 11:25 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getColr();
string getNumr();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand (static_cast<unsigned int>(time(0)));
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=1;i<=10;i++){
        cout<<getColr()<<endl;
    }
    //Test out the card shuffle and pick
    string card1,card2,card3,card4,card5;
    //chose cards
    card1=getNumr(rand()%52+1);
    do{
        card2=getNumr(rand()%52+1);
    }while(card1==card2);
    do{
        card3=getNumr(rand()%52+1);
    }while(card1==card3 || card2=card3);
    do{
        card4=getNumr(rand()%52+1);
    }while(card1==card4 || card2=card4 || card3==card4);
    do{
        card5=getNumr(rand()%52+1);
    }
    //Output the 5 unique cards
    cout<<card1<<" "<<<<card2<<" "<<card3<<" "
            <<card4<<" "<<card5<<endl;
    //Exit
    return 0;
}
string getColr(){
    //Declare variables
    fstream in;
    string color;
    int nLines;
    //Initialize Variables
    in.open("color.dat");
    if( ! in ) cout << "Can't open file " << endl;
    nLines=rand()%8+1;//Possible 8 colors in the file
    for(int line=1;line<=nLines;line++){
        in>>color;
    }
    //close file
    in.close();
    //return the random color
    return color;
}
string getNumr(){
    //Declare variables
    fstream in;
    string card;
    int nLines;
    //Initialize Variables
    in.open("card.dat");
    if( ! in ) cout << "Can't open file " << endl;
    nLines=rand()%54+1;//Possible 54 cards in the file
    for(int line=1;line<=nLines;line++){
        in>>card;
    }
    //close file
    in.close();
    //return the random color
    return card;
}