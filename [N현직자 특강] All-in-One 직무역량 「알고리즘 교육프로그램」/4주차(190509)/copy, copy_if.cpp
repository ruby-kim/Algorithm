#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector
using namespace std;

int main () {
  int myints[]={10,20,30,40,50,60,70};
  vector<int> myvector (7);
  vector<int> bar (myvector.size());

  copy ( myints, myints+7, myvector.begin() );

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;
  std::cout << '\n';


  auto it = std::copy_if (myints, myints+7, bar.begin(), [](int i){return i<40;} );
  bar.resize(distance(bar.begin(),it));
  cout << "bar contains:";
  for (vector<int>::iterator it = bar.begin(); it!=bar.end(); ++it)
    cout << ' ' << *it;
  std::cout << '\n';
  
 
  return 0;
}

