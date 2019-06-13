#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename Iter>

void print(Iter begin, Iter end) 
{
  while (begin != end) {
    cout << *begin << " ";
    begin++;
  }
  cout << endl;
}

int main() 
{
  vector<int> vec;
  vec.push_back(5);
  vec.push_back(3);
  vec.push_back(1);
  vec.push_back(6);
  vec.push_back(4);
  vec.push_back(7);
  vec.push_back(2);

  cout << "정렬 전 ----" << endl;
  print(vec.begin(), vec.end());
  partial_sort(vec.begin(), vec.begin() + 3, vec.end());

  cout << "정렬 후 ----" << endl;
  print(vec.begin(), vec.end());
}
