#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int fibonacci[21];
    fibonacci[0]=0;
    fibonacci[1]=1;
    
    for(int i=2; i<21; i++)
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    
    int n;
    cin>>n;
    cout<<fibonacci[n];
    
    return 0;
}
