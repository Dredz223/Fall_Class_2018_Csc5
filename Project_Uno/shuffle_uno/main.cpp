/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on December 7th, 2018, 9:22 PM
 * Purpose:  Deck of Cards (Uno Version)
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //
#include <cstring>  //String Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void filDeck(string [],int);     //Fill the deck Ace-King, Spade-Diamonds
void prnDeck(string [],int,int); //Print the Deck of Cards
void shuffle(string [],int,int); //Shuffle the Deck

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int NUMCRDS=72;  //Size of the Deck
    const int NUMCRDS2=57;  //Size of the Deck
    int n2Shufl=7;         //How many times to Shuffle the Deck
    string deck[NUMCRDS];  //72 Cards represented as a string Face|Suit
    string hand1;          //Hand 1 display 7 cards
    string startCD,startCD2;        //Starting card where we compare to other hands
    string tempCD;
    string null[NUMCRDS];
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
    startCD=deck[rand()%NUMCRDS];
    cout<<"Starting card is: "<<startCD<<endl;
    
    //Hand 1 display 7 cards
    cout<<"Player 1's hand is: "<<endl;
    for(int i=0;i<7;i++){
        cout<<"Card "<<i+1<<" is: "<<deck[i]<<endl;
    }
    string card1 = deck[0];
    string card2 = deck[1];
    string card3 = deck[2];
    
    cout<<"Random card"<<endl;
    cout<<startCD<<endl;
    string temp=startCD;
    cout<<"Card 1 is "<<card1<<endl;
    cout<<"The color is "<<temp[1]<<endl;
    cout<<"The Number is "<<temp[0]<<endl;
    cout<<"Card 1 color is "<<card1[1]<<endl;
    cout<<"Card 1 Number is "<<card1[0]<<endl;
    
    cout<<"Card 2 color is "<<card2[1]<<endl;
    cout<<"Card 2 Number is "<<card2[0]<<endl;
    
    //Checking the color
    if(temp[1] == card1[1]){
        cout<<"Same"<<endl;
        
    }
    else{
        cout<<"Not same"<<endl;
    }
    //Checking the number
    if(temp[0] == card1[0]){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    tempCD = card1;
    card1 = null[7];
    cout<<"Hi "<<card1<<" <-- BOB"<<endl;
    startCD2 = deck[14+rand()%(NUMCRDS2)];
    
    cout<<"Hello! Card "<<startCD2<<endl;
    cout<<"Hello! Card "<<NUMCRDS2<<endl;
   //Exit program!
    return 0;
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
