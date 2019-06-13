#include <iostream>    
#include <algorithm>   
#include <vector>      
using namespace std;

bool mypredicate (int i, int j) 
{
  return (i==j);
}

int main () 
{
  int myints[] = {20,40,60,80,100};               //   myints: 20 40 60 80 100
  vector<int>myvector (myints,myints+5);     // myvector: 20 40 60 80 100

  // using default comparison:
  if (equal (myvector.begin(), myvector.end(), myints) )
    cout << "The contents of both sequences are equal.\n";
  else
    cout << "The contents of both sequences differ.\n";

  myvector[3]=81;                                 // myvector: 20 40 60 81 100

  // using predicate comparison:
  if ( equal (myvector.begin(), myvector.end(), myints, mypredicate) )
    cout << "The contents of both sequences are equal.\n";
  else
    cout << "The contents of both sequences differ.\n";

  return 0;
}
 
