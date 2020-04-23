#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int total=0;
    string num;
    
    cin>>N>>num;
    
    for(int i=0; i<num.length(); i++)
        total += num[i]-'0';
    cout<<total;
    
    return 0;
}