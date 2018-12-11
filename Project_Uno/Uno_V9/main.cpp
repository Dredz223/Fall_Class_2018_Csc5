/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on October 5th, 2018 7:10PM
 * Purpose:  Uno Project_V9
 *         
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>  //Random Library
#include <cstring>  //String Library
#include <ctime>    //Time Library
#include <fstream>  //Stream Library 
#include <iomanip>  //I/o Manip Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
string getNum();
string getColr(int);
string getCard(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string player1,player2;//Player Names
    string num1,num2,num3,num4,num5,num6,num7,num8,num9;
    string colr1,colr2,colr3,colr4,colr5,colr6,colr7,colr8,colr9;
    string card1,card2,card3,card4,card5,card6,card7,card8,deck;
    bool end;
    
    cout<<"This is a game of UNO!"<<endl;
    cout<<"Enter the names of the 2 players!"<<endl;
    cin>>player1>>player2;//Insert the names of the players
    
    //Initialize Variables
    int nHands=8;
    end = false;//0 false 1 true
    //Map/Process Inputs to Outputs
    //choosing the random color 
    for(int i=1;i<=nHands;i++){
        colr1 = getColr(rand()%4+1);
        colr2 = getColr(rand()%4+1);
        colr3 = getColr(rand()%4+1);
        colr4 = getColr(rand()%4+1);
        colr5 = getColr(rand()%4+1);
        colr6 = getColr(rand()%4+1);
        colr7 = getColr(rand()%4+1);
        colr8 = getColr(rand()%4+1);
        colr9 = getColr(rand()%4+1);
    }
    //Choosing 4 unique cards
    //choose cards
    for(int hands=1;hands<=nHands;hands++){
        num1 = getCard(rand()%9+1);
        do{
            num2 = getCard(rand()%9+1);
        }while(num1 == num2);
        do{
            num3 = getCard(rand()%9+1);
        }while(num1 == num3 || num2 == num3);
        do{
            num4 = getCard(rand()%9+1);
        }while(num1 == num4 || num2 == num4 || num3 == num4);
        do{
            num5 = getCard(rand()%9+1);
        }while(num1 == num5 || num2 == num5 || num3 == num5 || num4 == num5);
        do{
            num6 = getCard(rand()%9+1);
        }while(num1 == num6 || num2 == num6 || num3 == num6 || num4 == num6 ||
                num5 == num6);
        do{
            num7 = getCard(rand()%16+1);
        }while(num1 == num7 || num2 == num7 || num3 == num7 || num4 == num7 ||
                num5 == num7 || num6 == num7);
        do{
            num8 = getCard(rand()%9+1);
        }while(num1 == num8 || num2 == num8 || num3 == num8 || num4 == num8 ||
                num5 == num8 || num6 == num8 || num7 == num8);
        num9 = getCard(rand()%9+1);//Starting card for deck
    }    
    //Card color and number
    card1 = colr1 + num1;//Card 1 for player 1
    card2 = colr2 + num2;//Card 2 for player 1
    card3 = colr3 + num3;//Card 3 for player 1
    card4 = colr4 + num4;//Card 4 for player 1
    card5 = colr5 + num5;//Card 5 for player 2
    card6 = colr6 + num6;//Card 6 for player 2
    card7 = colr7 + num7;//Card 7 for player 2
    card8 = colr8 + num8;//Card 8 for player 2
    deck  = colr9 + num9;//Starting deck for game
    
    //Display Hand
    cout<<"Players: "<<player1<<", "<<player2<<endl;
    
    cout<<player1<<setw(10)<<" Card 1:"<<card1<<setw(10)<<"Card 2:"<<card2<<
            setw(10)<<"Card 3:"<<card3<<setw(10)<<"Card 4:"<<card4<<endl;
    cout<<player2<<setw(10)<<" Card 1:"<<card5<<setw(10)<<"Card 2:"<<card6<<
            setw(10)<<"Card 3:"<<card7<<setw(10)<<"Card 4:"<<card8<<endl;
    
    //Display starting deck
    cout<<"The starting card for the game is: "<<deck<<endl;
    
    //Player one goes first card 1-4 check
    //Start if statement with a color check
    do{
        //Player 1 goes first
        cout<<player1<<"'s turn"<<endl;
        if(colr1 == colr9 || num1 == num9){
            deck = card1;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr2 == colr9 || num2 == num9){
            deck = card2;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr3 == colr9 || num3 == num9){
            deck = card3;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr4 == colr9 || num4 == num9){
            deck = card4;
            cout<<"The new deck is "<<deck<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            cout<<player1<<"'s turn is skipped"<<endl;
            //Player 2
            cout<<player2<<"'s turn"<<endl; 
            if(colr5 == colr9 || num5 == num9){
                deck = card5;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr6 == colr9 || num6 == num9){
                deck = card6;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr7 == colr9 || num7 == num9){
                deck = card7;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr8 == colr9 || num8 == num9){
                deck = card8;
                cout<<"The new deck is "<<deck<<endl;
            }
            else{
                cout<<player2<<"'s turn skipped"<<endl;
            }
        }
        //Player 2
        cout<<player2<<"'s turn"<<endl; 
        if(colr5 == deck || num5 == deck){
            deck = card5;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr6 == deck || num6 == deck){
            deck = card6;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr7 == deck || num7 == deck){
            deck = card7;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr8 == deck || num8 == deck){
            deck = card8;
            cout<<"The new deck is "<<deck<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            cout<<player2<<"'s turn skipped"<<endl;
        }
    }while(end !=false);
    
    
    
    
    
    
    
    
    //Exit program!
    return 0;
}
string getNum(){
    //Declare Variables
    fstream in;
    string cardnum;
    int nLines;
    //Initialize variables
    in.open("number.dat");
    nLines=rand()%9+1;//9 numbers 1-9
    //Look through file to choose random number
    for(int line=1;line<=nLines;line++){
        in>>cardnum;
    }
    //close file
    in.close();
    //Return random number
    return cardnum;
}
string getColr(int nLines){
    //Declare Variables
    fstream in;
    string color;
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
string getCard(int nLines){
    //Declare Variables
    fstream in;
    string card;
    //Initialize variables
    in.open("number.dat");
    for(int line=1;line<=nLines;line++){
        in>>card;
    }
    //Close the file
    in.close();
    //Return
    return card;
}