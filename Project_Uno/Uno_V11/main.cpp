/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on October 6th, 2018 8:20PM
 * Purpose:  Uno Project_V11
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
string getColr(int);//Function for getting random color for the card
string getCard(int);//Function for getting random number for the card
//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string player1,player2;//Player Names
    string num1,num2,num3,num4,num5,num6,num7,num8,num9;
    string colr1,colr2,colr3,colr4,colr5,colr6,colr7,colr8,colr9;
    string card1,card2,card3,card4,card5,card6,card7,card8,deck;
    string tempN1,tempC1,tempN2,tempC2,tempN3,tempC3,tempN4,tempC4;
    string numD, colrD;
    float  hand=4,tempH1,tempH2;
    bool end;
    int nHands=8;
    cout<<"This is a game of UNO!"<<endl;
    cout<<"Enter the names of the 2 players!"<<endl;
    cin>>player1>>player2;//Insert the names of the players
    
    //Initialize Variables
    end = false;//0 false 1 true
    //Map/Process Inputs to Outputs
    //choosing the random color 
    colr1 = getColr(rand()%4+1);
    colr2 = getColr(rand()%4+1);
    colr3 = getColr(rand()%4+1);
    colr4 = getColr(rand()%4+1);
    colr5 = getColr(rand()%4+1);
    colr6 = getColr(rand()%4+1);
    colr7 = getColr(rand()%4+1);
    colr8 = getColr(rand()%4+1);
    colrD = getColr(rand()%4+1);//Color of the starting deck
    
    //Choosing 4 unique cards
    //choose cards
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
        numD = getCard(rand()%9+1);//Number of the starting deck
    //Card color and number
    card1 = colr1 + num1;//Card 1 for player 1
    card2 = colr2 + num2;//Card 2 for player 1
    card3 = colr3 + num3;//Card 3 for player 1
    card4 = colr4 + num4;//Card 4 for player 1
    card5 = colr5 + num5;//Card 5 for player 2
    card6 = colr6 + num6;//Card 6 for player 2
    card7 = colr7 + num7;//Card 7 for player 2
    card8 = colr8 + num8;//Card 8 for player 2
    deck  = colrD + numD;//Starting deck for game
    
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
    
    //Player 1 goes first
    cout<<player1<<"'s turn"<<endl;
    if(colr1 == colrD || num1 == numD){
        tempN1 = num1;
        tempC1 = colr1;
        deck = card1;
        colr1.clear();
        num1.clear();
        tempH1 = hand - 1;
        cout<<player1<<"'s current hand is "<<tempH1<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr2 == colrD || num2 == numD){
        tempN2 = num2;
        tempC2 = colr2;
        deck = card2;
        colr2.clear();
        num2.clear();
        tempH1 = hand - 1;
        cout<<player1<<"'s current hand is "<<tempH1<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr3 == colrD || num3 == numD){
        tempN3 = num3;
        tempC3 = colr3;
        deck = card3;
        colr3.clear();
        num3.clear();
        tempH1 = hand -1;
        cout<<player1<<"'s current hand is "<<tempH1<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr4 == colrD || num4 == numD){
        tempN4 = num4;
        tempC4 = colr4;
        deck = card4;
        colr4.clear();
        num4.clear();
        tempH1 = hand -1;
        cout<<player1<<"'s current hand is "<<tempH1<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else{
        cout<<"No cards available!!!"<<endl;
        hand = 4;
        cout<<player1<<"'s current hand is "<<hand<<endl;
        cout<<player1<<"'s turn is skipped"<<endl;
        //Player 2's turn if player 1 was skipped
        cout<<player2<<"'s turn"<<endl; 
        if(colr5 == colrD || num5 == numD){
            tempN1 = num5;
            tempC1 = colr5;
            deck = card5;
            colr5.clear();
            num5.clear();
            tempH2 = hand -1;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr6 == colrD || num6 == numD){
            tempN2 = num6;
            tempC2 = colr6;
            deck = card6;
            colr6.clear();
            num6.clear();
            tempH2 = hand -1;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr7 == colrD || num7 == numD){
            tempN3 = num7;
            tempC3 = colr7;
            deck = card7;
            colr7.clear();
            num7.clear();
            tempH2 = hand -1;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr8 == colrD || num8 == numD){
            tempN4 = num8;
            tempC4 = colr8;
            deck = card8;
            colr8.clear();
            num8.clear();
            tempH2 = hand -1;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            hand = 4;
            cout<<player2<<"'s current hand is "<<hand<<endl;
            cout<<player2<<"'s turn skipped"<<endl;
        }
    }
    //Player 2 after player 1 had played a card
    cout<<player2<<"'s turn"<<endl; 
    if(colr5 == tempC1 || num5 == tempN1 || colr5 == tempC2 || num5 == tempN2
            || colr5 == tempC3 || num5 == tempN3 || colr5 == tempC4 
            || num5 == tempN4){
        colrD = colr5;
        numD  = num5;
        deck = card5;
        colr5.clear();
        num5.clear();
        tempH2 = hand -1;
        cout<<player2<<"'s current hand is "<<tempH2<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr6 == tempC1 || num6 == tempN1 || colr6 == tempC2 || 
            num6 == tempN2 || colr6 == tempC3 || num6 == tempN3 ||
            colr6 == tempC4 || num6 == tempN4){
        colrD = colr6;
        numD  = num6;
        deck = card6;
        colr6.clear();
        num6.clear();
        tempH2 = hand -1;
        cout<<player2<<"'s current hand is "<<tempH2<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr7 == tempC1 || num7 == tempN1 || colr7 == tempC2 || 
            num7 == tempN2 || colr7 == tempC3 || num7 == tempN3 ||
            colr7 == tempC4 || num7 == tempN4){
        colrD = colr7;
        numD  = num7;
        deck = card7;
        colr7.clear();
        num7.clear();
        tempH2 = hand -1;
        cout<<player2<<"'s current hand is "<<tempH2<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else if(colr8 == tempC4 || num8 == tempN4 || colr8 == tempC2 || 
            num8 == tempN2 || colr8 == tempC3 || num8 == tempN3 ||
            colr8 == tempC4 || num8 == tempN4){
        colrD = colr8;
        numD  = num8;
        deck = card8;
        colr8.clear();
        num8.clear();
        tempH2 = hand -1;
        cout<<player2<<"'s current hand is "<<tempH2<<endl;
        cout<<"The new deck is "<<deck<<endl;
    }
    else{
        cout<<"No cards available!!!"<<endl;
        hand = 4;
        cout<<player2<<"'s current hand is "<<hand<<endl;
        cout<<player2<<"'s turn skipped"<<endl;
    }
      
    //Repeat loop turn 2 and beyond until player has 1 card and "UNO" 
    do{
        cout<<player1<<"'s turn"<<endl; 
        if(colr1 == colrD || num1 == numD){
            colrD = colr1;
            numD  = num1;
            deck = card1;
            colr1.clear();
            num1.clear();
            tempH1 = --tempH1;
            cout<<player1<<"'s current hand is "<<tempH1<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr2 == colrD || num2 == numD){
            colrD = colr2;
            numD  = num2;
            deck = card2;
            colr2.clear();
            num2.clear();
            tempH1 = --tempH1;
            cout<<player1<<"'s current hand is "<<tempH1<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr3 == colrD || num3 == numD){
            colrD = colr3;
            numD  = num3;
            deck = card3;
            colr3.clear();
            num3.clear();
            tempH1 = --tempH1;
            cout<<player1<<"'s current hand is "<<tempH1<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr4 == colrD || num4 == numD){
            colrD = colr4;
            numD = num4;
            deck = card4;
            colr4.clear();
            num4.clear();
            tempH1 = --tempH1;
            cout<<player1<<"'s current hand is "<<tempH1<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            cout<<player1<<"'s turn skipped"<<endl;
            //Player 2
            cout<<player2<<"'s turn"<<endl; 
            if(colr5 == colrD || num5 == numD){
                tempN1 = num5;
                tempC1 = colr5;
                deck = card5;
                colr5.clear();
                num5.clear();
                tempH2 = --tempH2;
                cout<<player2<<"'s current hand is "<<tempH2<<endl;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr6 == colrD || num6 == numD){
                tempN2 = num6;
                tempC2 = colr6;
                deck = card6;
                colr6.clear();
                num6.clear();
                tempH2 = --tempH2;
                cout<<player2<<"'s current hand is "<<tempH2<<endl;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr7 == colrD || num7 == numD){
                tempN3 = num7;
                tempC3 = colr7;
                deck = card7;
                colr7.clear();
                num7.clear();
                tempH2 = --tempH2;
                cout<<player2<<"'s current hand is "<<tempH2<<endl;
                cout<<"The new deck is "<<deck<<endl;
            }
            else if(colr8 == colrD || num8 == numD){
                tempN4 = num8;
                tempC4 = colr8;
                deck = card8;
                colr8.clear();
                num8.clear();
                tempH2 = --tempH2;
                cout<<player2<<"'s current hand is "<<tempH2<<endl;
                cout<<"The new deck is "<<deck<<endl;
            }
            else{
                cout<<"No cards available!!!"<<endl;
                cout<<player2<<"'s turn skipped"<<endl;
            }
        }
        //Player 2 if player 1 plays a card
        cout<<player2<<"'s turn"<<endl; 
        if(colr5 == colrD || num5 == numD){
            tempN1 = num5;
            tempC1 = colr5;
            deck = card5;
            colr5.clear();
            num5.clear();
            tempH2 = --tempH2;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr6 == colrD || num6 == numD){
            tempN2 = num6;
            tempC2 = colr6;
            deck = card6;
            colr6.clear();
            num6.clear();
            tempH2 = --tempH2;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr7 == colrD || num7 == numD){
            tempN3 = num7;
            tempC3 = colr7;
            deck = card7;
            colr7.clear();
            num7.clear();
            tempH2 = --tempH2;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else if(colr8 == colrD || num8 == numD){
            tempN4 = num8;
            tempC4 = colr8;
            deck = card8;
            colr8.clear();
            num8.clear();
            tempH2 = --tempH2;
            cout<<player2<<"'s current hand is "<<tempH2<<endl;
            cout<<"The new deck is "<<deck<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            cout<<player2<<"'s turn skipped"<<endl;
        }
        //Player hands used to display UNO!!! and end game
        //says uno
        if(tempH1 == 1){
            cout<<player1<<" UNO!!!";
        }
        //Ends game player 1 wins
        if(tempH1 == 0){
            end = false;
            cout<<player1<<" Wins! Congratulations! "<<endl;
        }
        //Says Uno
        if(tempH2 == 1){
            cout<<player2<<" UNO!!!";
        }
        //Ends game player 2 wins
        if(tempH2 == 0){
            end = false;
            cout<<player2<<" Wins! Congratulations! "<<endl;
        }
        
    }while(end != false);
    
    //Exit program!
    return 0;
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