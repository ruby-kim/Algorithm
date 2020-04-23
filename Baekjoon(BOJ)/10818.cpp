#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> v;
    int N, tmp;
    
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    
    sort(v.begin(), v.end());
    
    cout<<v.front()<<" "<<v.back();
    
    return 0;
}