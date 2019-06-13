#include <iostream>     // std::cout
#include <algorithm>    // std::min
using namespace std;

int main () {
  
  cout << "min(1,2)==" << std::min(1,2) << endl;
  cout << "min('a','z')==" << std::min('a','z') << endl;
  
  cout << "----------------------" << endl;
  cout << "max(2,1)==" << std::max(2,1) << endl;
  
  auto result1 = minmax({1,2,3,4,5});
  cout << "----------------------" << endl;
  cout << result1.first << ' ' << result1.second << '\n';

  cout << "----------------------" << endl;
  int myints[] = {3,7,2,5,6,4,9};

  // using default comparison:
  cout << "The smallest element is " << *min_element(myints,myints+7) << '\n';
  cout << "The largest element is "  << *max_element(myints,myints+7) << '\n';
  
  cout << "----------------------" << endl;
  auto result2 = minmax_element (myints,myints+7);
  std::cout << "min is " << *result2.first << endl;
  std::cout << "max is " << *result2.second << endl;;

  return 0;
}

