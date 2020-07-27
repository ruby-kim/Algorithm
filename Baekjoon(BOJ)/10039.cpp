#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int sum = 0;
    for(int i=0; i<5; i++){
        cin>>N;
        if(N<40) N=40;
        sum += N;
    }
    cout<<sum/5;
    
    return 0;
}
