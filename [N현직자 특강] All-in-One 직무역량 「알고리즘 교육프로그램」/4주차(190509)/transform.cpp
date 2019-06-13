#include <iostream>
#include <cctype> // toupper, tolower
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
 
int main()
{
    
  string a = "abcABC.,!";
  string b = "";

  int len = a.size();

  b.resize(len);
 

  std::transform(a.begin(), a.end(), b.begin(), ::toupper);
  cout << b << endl;


  std::transform(a.begin(), a.end(), b.begin(), ::tolower);
  cout << b << endl;

  return 0;
}
