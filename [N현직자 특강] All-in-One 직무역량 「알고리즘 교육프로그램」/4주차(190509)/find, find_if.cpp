#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsOdd (int i) 
{
  return ((i%2)==1);
}

int main() 
{
  vector<int> vec;
  vec.push_back(5);
  vec.push_back(3);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  vector<int>::iterator it;
  
  // find 함수
  it = find(vec.begin(), vec.end(), 3);
  cout <<  "Find resutl : " << *it << endl;
  
  // find_if 함수
  it = find_if (vec.begin(), vec.end(), IsOdd);
  cout << "The first odd value is " << *it << '\n';
}
