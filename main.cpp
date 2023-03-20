#include <iostream>
#include <string>
#include <cctype>
#include "Reverser.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

// This program illustrates working with input streams.  The explanation of the various calls can be found in this week's lecture recording

int main(void) {
    string S;
    int i, numCrates,loadSize;
    
    cout << "Input: " ;
    cin >> i >> S >> numCrates >> loadSize;
    //cout << "You entered: " << i << " " << S << " " << numCrates << " " << loadSize << endl ;
    cin.clear();

    Reverse RS1;
    //RS1.reverseDigit(-14);
    if (RS1.reverseDigit(i)==-1)
    {
        cout << "ERROR  ";
    }else
    {
       cout << RS1.reverseDigit(i) <<" ";
    }
    
    cout << RS1.reverseString(S) <<" ";    

    Truckloads TL1; 
    EfficientTruckloads ETL1;
  
    if (numCrates < 2 || numCrates > 10000 )
    {
        cout << " ERROR ERROR";
        return 0;
    }
    else  if (loadSize < 1 || loadSize > numCrates-1)
    {
        cout << " ERROR ERROR";
        return 0;
    }
    cout << TL1.numTrucks(numCrates,loadSize) <<" ";
    cout << ETL1.numTrucks(numCrates,loadSize) <<endl;       
  
}
