#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>> A; //내림차순
    priority_queue<int, vector<int>, greater<int>> B; //오름차순
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, temp;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>temp;
        A.push(temp);
    }
      
    for(int i=0; i<N; i++){
        cin>>temp;
        B.push(temp);
    }

    int total=0;
    for(int i=0; i<N; i++){
        total += A.top()*B.top();
        A.pop();
        B.pop();
    }
    cout<<total;
    
    return 0;
}