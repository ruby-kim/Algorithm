#include <iostream>     // std::cout
#include <algorithm>    // std::remove
#include <vector>
#include <string>
using namespace std;


int main () {
  
  int N;
  vector<pair<int, string>> v;
  string s;

  cin >> N;
  for(int i=0; i<N; i++)
  {
      cin >> s;
      v.push_back(pair<int, string> (s.size(), s));
  }
  
  sort(v.begin(), v.end());
  
  cout << Result : << endl;
  for(int i=0; i<N; i++)
  {
      cout << v[i].second << endl;
    }
    
  return 0;
}
 
