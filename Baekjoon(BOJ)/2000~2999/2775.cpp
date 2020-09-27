#include <iostream>
#include <algorithm>

using namespace std;

int ar[15][15] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T,k,n;
    
    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){
            if(i==0){
                for(int k=0; k<14; k++)
                    ar[i][k] = k+1;
                continue;
            }
            else{
                if(j==0){
                    ar[i][j] = 1;
                    continue;
                }
                ar[i][j] = ar[i-1][j]+ar[i][j-1];
            }
        }
    }
    
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>k>>n;
        cout<<ar[k][n-1]<<endl;
    }
    
    return 0;
}
