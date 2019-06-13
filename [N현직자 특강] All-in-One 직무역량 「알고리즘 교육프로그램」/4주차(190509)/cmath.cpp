#include <iostream>     // std::cout
#include <cmath>        // std::abs

using namespace std;

int main ()
{
  cout << "abs (-10.6)  = " << abs (-10.6) << '\n';
  cout << "ceil (10.6)  = " << ceil (10.6) << '\n';
  cout << "ceil (-10.6)  = " << ceil (-10.6) << '\n';
  cout << "floor (10.6)  = " << floor (10.6) << '\n';
  cout << "floor (-10.6)  = " << floor (-10.6) << '\n';
  cout << "round (10.6)  = " << round (10.6) << '\n';
  cout << "round (-10.6)  = " << round (-10.6) << '\n';
  cout << "round (10.4)  = " << round (10.4) << '\n';
  cout << "round (-10.4)  = " << round (-10.4) << '\n';
  
  return 0;
}
