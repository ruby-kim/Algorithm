#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int num;
    int cnt=0;
    
    cin>>N;
    num = N;
    while(1){
        num = (num%10)*10 + (num/10 + num%10)%10;
        cnt++;
        if(num==N) break;
    }
    
    cout<<cnt;
    
    return 0;
}