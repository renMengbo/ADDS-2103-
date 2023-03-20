
#include <iostream>
#include <vector>
#include "EfficientTruckloads.h"
using namespace std;


EfficientTruckloads::EfficientTruckloads(/* args */)
{
  
    for (vector<int>::size_type i = 0; i <10000; i++)
     TrucksTable.push_back(i);
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  /*  
    if (numCrates < 2 || numCrates > 10000)
    {
        cout << " ERROR";
        return 0;
    }
    else  if (loadSize < 1 || loadSize > numCrates-1)
    {
        cout << " ERROR";
        return 0;
    }
  */  
       if (loadSize >= numCrates) 
        {return 1;}
        else 
    TrucksTable.at(numCrates) = numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
    return TrucksTable.at(numCrates);

}

EfficientTruckloads::~EfficientTruckloads()
{
}
