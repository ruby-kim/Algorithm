#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int cnt=0;
    string s;
    bool checker = true;
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>s;
        for(int j=1; j<s.length(); j++){
            if(s.find(s[j-1], j)!=string::npos){
                if(s[j-1]==s[j]) continue;
                checker = false;
                break;
            }
        }
        if(checker) cnt++;
        checker = true;
    }
    
    cout<<cnt;
    
    return 0;
}