#include <iostream>
#include "Truckloads.h"
using namespace std;

Truckloads::Truckloads(/* args */)
{
}

int Truckloads::numTrucks(int numCrates, int loadSize)
{
/*   if (numCrates < 2 || numCrates > 10000)
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
        {   //cout <<  numCrates <<endl;
            return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
        }
 
}

Truckloads::~Truckloads()
{
}
