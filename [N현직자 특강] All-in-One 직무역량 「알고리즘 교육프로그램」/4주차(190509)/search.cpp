#include <iostream>     // std::cout
#include <algorithm>    // std::search
#include <vector>       // std::vector
using namespace std;

bool mypredicate (int i, int j) 
{
  return (i>j);
}

int main () 
{
  vector<int> haystack;

  // set some values:        haystack: 10 20 30 40 50 60 70 80 90
  for (int i=1; i<10; i++) haystack.push_back(i*10);

  // using default comparison:
  int needle1[] = {40,50,60,70};
  vector<int>::iterator it;
  it = search (haystack.begin(), haystack.end(), needle1, needle1+4);

  if (it!=haystack.end())
    cout << "needle1 found at position " << (it-haystack.begin()) << '\n';
  else
    cout << "needle1 not found\n";

  return 0;
}

