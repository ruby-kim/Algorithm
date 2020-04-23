#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int A,B;
    
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>A>>B;
        cout<<A+B<<endl;
    }
    
    return 0;
}