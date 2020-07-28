#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> v;
    int A,B,C;
    cin>>A>>B>>C;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    
    sort(v.begin(), v.end()); 
    
    cout<<v[1];
    
    return 0;
}