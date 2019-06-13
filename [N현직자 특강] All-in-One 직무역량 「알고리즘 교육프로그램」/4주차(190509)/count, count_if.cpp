#include <iostream>     
#include <algorithm>    
#include <vector>       

using namespace std;

bool IsOdd (int i) 
{ 
  return ((i%2)==1); 
}

int main () 
{
  // counting elements in array:
  int myints[] = {10,20,30,30,20,10,10,20};   // 8 elements
  int mycount = count (myints, myints+8, 10);
  cout << "10 appears " << mycount << " times.\n";
 
  vector<int> myvector;
  for (int i=1; i<10; i++) myvector.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9

  mycount = count_if (myvector.begin(), myvector.end(), IsOdd);
  cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}

