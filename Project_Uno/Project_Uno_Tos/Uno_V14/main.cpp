/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on December 9th, 2018 8:40PM
 * Purpose:  Uno Project_V14
 *         
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>  //Random Library
#include <cstring>  //String Library
#include <ctime>    //Time Library
#include <fstream>  //Stream Library 
#include <iomanip>  //I/o Manip Library
#include <cmath>    //Math Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void Rules();                    //Rules function
void filDeck(string [],int);     //Fill the deck 1-9, Red, Green, Blue, Yellow
void prnDeck(string [],int,int); //Print the Deck of Cards
void shuffle(string [],int,int); //Shuffle the Deck

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int NUMCRDS=72;  //Size of the Deck
    const int NUMCRDZ=57;  //Size of the Deck that will be randomized
    int n2Shufl=7;         //How many times to Shuffle the Deck
    string deck[NUMCRDS];  //72 Cards represented as a string Face|Suit
    string hand1;          //Hand 1 display 7 cards
    string strtCD,tempCD;  //Starting card where we compare to other hands
    string player1,player2;//Player Names
    string tempN,tempC;
    string null[NUMCRDS];  //array with no values 
    int  numhnd=7,tempH1,tempH2;
    bool end,              //End Condition
         turn,             //Used when player 1 is skipped and to not repeat p2's turn
         lturn;            //Used to not repeat p2's turn after already played
    int count=2;           //used to force end game 
    float pnts;            //Points awarded  
    
    //Displays Rules
    Rules();
    cout<<endl;
    
    //Ask the players for their name
    cout<<"This is a game of UNO!"<<endl;
    cout<<"Enter the names of the 2 players!"<<endl;
    cin>>player1>>player2;//Insert the names of the players
    
    //Initial Variables
    filDeck(deck,NUMCRDS);
    
    //Print the Cards
    cout<<"Fresh Deck of Cards before Shuffling"<<endl;
    prnDeck(deck,NUMCRDS,NUMCRDS/8);
    
    //Print the Cards
    shuffle(deck,NUMCRDS,n2Shufl);
    
    //Print the Cards
    cout<<"Deck of Cards after Shuffling"<<endl;
    prnDeck(deck,NUMCRDS,NUMCRDS/8);
    
    //Getting Starting card
    strtCD=deck[14+rand()%(NUMCRDZ)];
    cout<<"The starting card is: "<<strtCD<<endl;
    
    //Hand 1 display 7 cards
    cout<<"============================================="<<endl;
    cout<<player1<<"'s hand is: "<<endl;
    for(int i=0;i<7;i++){
        cout<<"Card "<<i+1<<": "<<deck[i]<<endl;
    }
    string card1 = deck[0];
    string card2 = deck[1];
    string card3 = deck[2];
    string card4 = deck[3];
    string card5 = deck[4];
    string card6 = deck[5];
    string card7 = deck[6];
    cout<<"============================================="<<endl;
    //Hand 2 display 7 cards
    cout<<player2<<"'s hand is: "<<endl;
    for(int i=7;i<14;i++){
        cout<<"Card "<<i-6<<": "<<deck[i]<<endl;
    }
    string card8  = deck[7];
    string card9  = deck[8];
    string card10 = deck[9];
    string card11 = deck[10];
    string card12 = deck[11];
    string card13 = deck[12];
    string card14 = deck[13];
    cout<<"============================================="<<endl;
    //return 0;
    //Initialize Variables
    end = false;    //condition to end the game
    
    //Map/Process Inputs to Outputs
    
    
    //Display Player names
    cout<<"Players: "<<player1<<", "<<player2<<endl;
    
    
    //Display starting deck
    cout<<"The starting card for the game is: "<<strtCD<<endl;
    cout<<"============================================="<<endl;
    //Player one goes first card 1-7 check
    //Start if statement with a color check
    
    //card[1] represents color, cards[0] represents number
    //Player 1 goes first
    cout<<player1<<"'s turn"<<endl;
    if(card1[1] == strtCD[1] || card1[0] == strtCD[0]){
        tempN = card1[0];
        tempC = card1[1];
        tempCD = card1;
        card1  = null[0];
        tempH1 = numhnd -1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card2[1] == strtCD[1] || card2[0] == strtCD[0]){
        tempN = card2[0];
        tempC = card2[1];
        tempCD = card2;
        card2  = null[1];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card3[1] == strtCD[1] || card3[0] == strtCD[0]){
        tempN = card3[0];
        tempC = card3[1];
        tempCD = card3;
        card3  = null[2];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card4[1] == strtCD[1] || card4[0] == strtCD[0]){
        tempN = card4[0];
        tempC = card4[1];
        tempCD = card4;
        card4  = null[3];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card5[1] == strtCD[1] || card5[0] == strtCD[0]){
        tempN = card5[0];
        tempC = card5[1];
        tempCD = card5;
        card5  = null[4];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card6[1] == strtCD[1] || card6[0] == strtCD[0]){
        tempN = card6[0];
        tempC = card6[1];
        tempCD = card6;
        card6  = null[5];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else if(card7[1] == strtCD[1] || card7[0] == strtCD[0]){
        tempN = card7[0];
        tempC = card7[1];
        tempCD = card7;
        card7  = null[6];
        tempH1 = numhnd - 1;
        cout<<"The new deck is: "<<tempCD<<endl;
        cout<<"The number of cards left in "<<player1<<"'s hand is "
                <<tempH1<<endl;
        cout<<"============================================="<<endl;
    }
    else{
        cout<<"No cards available to play!!!"<<endl;
        cout<<"The number of cards left in "<<player1<<"'s current hand is "
                <<numhnd<<endl;
        cout<<"============================================="<<endl;
        cout<<player1<<"'s turn is skipped"<<endl;
        
        //Player 2's turn if player 1 was skipped
        cout<<player2<<"'s turn"<<endl; 
        if(card8[1] == strtCD[1] || card8[0] == strtCD[0]){
            tempN = card8[0];
            tempC = card8[1];
            tempCD = card8;
            card8  = null[7];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card9[1] == strtCD[1] || card9[0] == strtCD[0]){
            tempN = card9[0];
            tempC = card9[1];
            tempCD = card9;
            card9  = null[8];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card10[1] == strtCD[1] || card10[0] == strtCD[0]){
            tempN = card10[0];
            tempC = card10[1];
            tempCD = card10;
            card10  = null[9];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card11[1] == strtCD[1] || card11[0] == strtCD[0]){
            tempN = card11[0];
            tempC = card11[1];
            tempCD = card11;
            card11  = null[10];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card12[1] == strtCD[1] || card12[0] == strtCD[0]){
            tempN = card12[0];
            tempC = card12[1];
            tempCD = card12;
            card12  = null[11];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card13[1] == strtCD[1] || card13[0] == strtCD[0]){
            tempN = card13[0];
            tempC = card13[1];
            tempCD = card13;
            card13  = null[12];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else if(card14[1] == strtCD[1] || card14[0] == strtCD[0]){
            tempN = card14[0];
            tempC = card14[1];
            tempCD = card14;
            card14  = null[13];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            //cout<<player2<<"'s current hand is "<<hand<<endl;
            cout<<player2<<"'s turn skipped"<<endl;
            cout<<"============================================="<<endl;
            turn = false;
        }
    }
    
    //Player 2 after player 1 had played a card
    cout<<player2<<"'s turn"<<endl; 
    do{
        if(card8[1] == tempCD[1] || card8[0] == tempCD[0]){
            tempN = card8[0];
            tempC = card8[1];
            tempCD = card8;
            card8  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card9[1] == tempCD[1] || card9[0] == tempCD[0]){
            tempN = card9[0];
            tempC = card9[1];
            tempCD = card9;
            card9  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card10[1] == tempCD[1] || card10[0] == tempCD[0]){
            tempN = card10[0];
            tempC = card10[1];
            tempCD = card10;
            card10  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card11[1] == tempCD[1] || card11[0] == tempCD[0]){
            tempN = card11[0];
            tempC = card11[1];
            tempCD = card11;
            card11  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card12[1] == tempCD[1] || card12[0] == tempCD[0]){
            tempN = card12[0];
            tempC = card12[1];
            tempCD = card12;
            card12  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card13[1] == tempCD[1] || card13[0] == tempCD[0]){
            tempN = card13[0];
            tempC = card13[1];
            tempCD = card13;
            card13  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else if(card14[1] == tempCD[1] || card14[0] == tempCD[0]){
            tempN = card14[0];
            tempC = card14[1];
            tempCD = card14;
            card14  = null[0];
            tempH2 = numhnd - 1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
        }
        else{
            cout<<"No cards available!!!"<<endl;
            cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
            turn = false;
            cout<<"============================================="<<endl;
            cout<<player2<<"'s turn skipped"<<endl;
        }
    }while(turn);
    
    //MAJOR DO WHILE LOOP AHEAD
    //Repeat loop turn 2 and beyond until player a has 1 card and says "UNO" 
    do{
        
        cout<<player1<<"'s turn"<<endl;
        if(card1[1] == tempCD[1] || card1[0] == tempCD[0]){
            tempN = card1[0];
            tempC = card1[1];
            tempCD = card1;
            card1  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else if(card2[1] == tempCD[1] || card2[0] == tempCD[0]){
            tempN = card2[0];
            tempC = card2[1];
            tempCD = card2;
            card2  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else if(card3[1] == tempCD[1] || card3[0] == tempCD[0]){
            tempN = card3[0];
            tempC = card3[1];
            tempCD = card3;
            card3  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else if(card4[1] == tempCD[1] || card4[0] == tempCD[0]){
            tempN = card4[0];
            tempC = card4[1];
            tempCD= card4;
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else if(card5[1] == tempCD[1] || card5[0] == tempCD[0]){
            tempN = card5[0];
            tempC = card5[1];
            tempCD = card5;
            card5  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else if(card6[1] == tempCD[1] || card6[0] == tempCD[0]){
            tempN = card6[0];
            tempC = card6[1];
            tempCD = card6;
            card6  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;;
                    cout<<"============================================="<<endl;
        }
        else if(card7[1] == tempCD[1] || card7[0] == tempCD[0]){
            tempN = card7[0];
            tempC = card7[1];
            tempCD = card7;
            card7  = null[0];
            tempH1 -=  1;
            cout<<"The new deck is: "<<tempCD<<endl;
            cout<<"The number of cards left in "<<player1<<"'s hand is "
                    <<tempH1<<endl;
            cout<<"============================================="<<endl;
        }
        else{
            cout<<"No cards available to play!!!"<<endl;
            //cout<<player1<<"'s current hand is "<<hand<<endl;
            cout<<player1<<"'s turn is skipped"<<endl;
            cout<<"============================================="<<endl;
            
            //Player 2's turn if player 1 was skipped
            cout<<player2<<"'s turn"<<endl; 
            if(card8[1] == tempCD[1] || card8[0] == tempCD[0]){
                tempN = card8[0];
                tempC = card8[1];
                tempCD = card8;
                card8  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card9[1] == tempCD[1] || card9[0] == tempCD[0]){
                tempN = card9[0];
                tempC = card9[1];
                tempCD = card9;
                card9  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card10[1] == tempCD[1] || card10[0] == tempCD[0]){
                tempN = card10[0];
                tempC = card10[1];
                tempCD = card10;
                card10  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card11[1] == tempCD[1] || card11[0] == tempCD[0]){
                tempN = card11[0];
                tempC = card11[1];
                tempCD = card11;
                card11  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card12[1] == tempCD[1] || card12[0] == tempCD[0]){
                tempN = card12[0];
                tempC = card12[1];
                tempCD = card12;
                card12  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card13[1] == tempCD[1] || card13[0] == tempCD[0]){
                tempN = card13[0];
                tempC = card13[1];
                tempCD = card13;
                card13  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else if(card14[1] == tempCD[1] || card14[0] == tempCD[0]){
                tempN = card14[0];
                tempC = card14[1];
                tempCD = card14;
                card14  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                lturn = false;
                cout<<"============================================="<<endl;
            }
            else{
                cout<<"No cards available!!!"<<endl;
                //cout<<player2<<"'s current hand is "<<hand<<endl;
                cout<<player2<<"'s turn skipped"<<endl;
                cout<<"============================================="<<endl;
            }
        }
        
        //says uno for player 1
        if(tempH1 == 1){
            cout<<player1<<" UNO!!!"<<endl;
            cout<<"============================================="<<endl;
        }
        
        //Player 2 if player 1 plays a card
        cout<<player2<<"'s turn"<<endl; 
        do{
            if(card8[1] == tempCD[1] || card8[0] == tempCD[0]){
                tempN = card8[0];
                tempC = card8[1];
                tempCD = card8;
                card8  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card9[1] == tempCD[1] || card9[0] == tempCD[0]){
                tempN = card9[0];
                tempC = card9[1];
                tempCD = card9;
                card9  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card10[1] == tempCD[1] || card10[0] == tempCD[0]){
                tempN = card10[0];
                tempC = card10[1];
                tempCD = card10;
                card10  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card11[1] == tempCD[1] || card11[0] == tempCD[0]){
                tempN = card11[0];
                tempC = card11[1];
                tempCD = card11;
                card11  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card12[1] == tempCD[1] || card12[0] == tempCD[0]){
                tempN = card12[0];
                tempC = card12[1];
                tempCD = card12;
                card12  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card13[1] == tempCD[1] || card13[0] == tempCD[0]){
                tempN = card13[0];
                tempC = card13[1];
                tempCD = card13;
                card13  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else if(card14[1] == tempCD[1] || card14[0] == tempCD[0]){
                tempN = card14[0];
                tempC = card14[1];
                tempCD = card14;
                card14  = null[0];
                tempH2 -=  1;
                cout<<"The new deck is: "<<tempCD<<endl;
                cout<<"The number of cards left in "<<player2<<"'s hand is "
                    <<tempH2<<endl;
                cout<<"============================================="<<endl;
            }
            else{
                cout<<"No cards available!!!"<<endl;
                cout<<player2<<"'s turn skipped"<<endl;
                cout<<"============================================="<<endl;
            }
        }while(lturn);
        
        //Player hands used to display UNO!!! and end game
        //Ends game player 1 wins
        if(tempH1 == 0){
            end = true;
            cout<<player1<<" Wins! Congratulations! "<<endl;
            cout<<"============================================="<<endl;
        }
        //Says Uno
        if(tempH2 == 1){
            cout<<player2<<" UNO!!!"<<endl;
            cout<<"============================================="<<endl;
        }
        //Ends game player 2 wins
        if(tempH2 == 0){
            end = true;
            cout<<player2<<" Wins! Congratulations! "<<endl;
            cout<<"============================================="<<endl;
        }
        
        //Counter used to end game where the game cannot be finished
        count++;
        if(count==15){
            cout<<"Game cannot be finished!!!"<<endl;
            end = true;
        }
    }while (end == false);
    
    //Exit program!
    return 0;   
}

void Rules(){
    string line;
    fstream inputFile;
    //open file
    inputFile.open("Rules.txt");
    if(inputFile.is_open()){
        while(getline(inputFile,line)){
            cout<<line<<"\n";
        }
        inputFile.close();
    }
}
void shuffle(string c[],int nCrd,int nShuf){
    for(int shuf=1;shuf<=nShuf;shuf++){
        for(int card=0;card<nCrd;card++){
            int indx=rand()%nCrd;
            string temp=c[card];
            c[card]=c[indx];
            c[indx]=temp;
        }
    }
}
void prnDeck(string c[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void filDeck(string c[],int n){
    //Red, Blue, Green, Yellow
    char suit[]={'R','B','G','Y'};
    char face[]={'1','2','3','4','5','6','7','8','9',
                 '1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<n;i++){
        c[i]=face[i%18];
        c[i]+=suit[i/18];
    }
}
