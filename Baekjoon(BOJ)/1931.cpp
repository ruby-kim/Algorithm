#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define lli long long int

 int main()
 {
      int N;
      cin >> N;

      vector<pair<lli, lli> > arr;

      for(int i=0; i<n; i++){
           int a, b;
           cin >> a >> b;
           arr.push_back(pair<lli, lli>(b,a)); // 정렬을 위해 위치 변경해서 삽입
      }
      sort(arr.begin(), arr.end());

      int cnt=1;                    // answer
      int end=arr[0].first;         // 회의 끝나는 시간
      for(int i=1; i<n; i++){
           if(end<=arr[i].second){
                end=arr[i].first;   // 다음 회의 잡히면 end변경 및 cnt+1
                cnt++;
           }
      }

      cout << cnt << endl;

      return 0;
}