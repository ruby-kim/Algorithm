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

struct int_compare 
{
  bool operator()(const int& a, const int& b) const { return a < b; }
};

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
  cout << "is_sorted() : " << is_sorted(vec.begin(), vec.end()) << endl;
  
  cout << "정렬 후 ----" << endl;
  sort(vec.begin(), vec.end(), int_compare());
  cout << "is_sorted() : " << is_sorted(vec.begin(), vec.end()) << endl;
  print(vec.begin(), vec.end());
}
