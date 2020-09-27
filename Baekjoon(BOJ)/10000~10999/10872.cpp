#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int result = 1;
    cin>>N;
    
    for(int i=N; i>=2; i--)
        result *= i;
    
    cout<<result;
        
    return 0;
}
