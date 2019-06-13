#include <iostream>     // std::cout
#include <algorithm>    // std::remove

using namespace std;

bool IsOdd (int i) 
{ 
  return ((i%2)==1); 
}

int main () 
{
  int myints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};      // 10 20 30 30 20 10 10 20

  // bounds of range:
  int* pbegin = myints;                         
  int* pend = myints+sizeof(myints)/sizeof(int);                       ^

  pend = remove_if (pbegin, pend, IsOdd);   // 2 4 6 8 ? ? ? ? ?
  for (int* p=pbegin; p!=pend; ++p)
    cout << ' ' << *p;
  cout << '\n';
  
  pend = remove (pbegin, pend, 8);         // 2 4 6 ?
  for (int* p=pbegin; p!=pend; ++p)
    cout << ' ' << *p;
  cout << '\n';

  return 0;
}
 
