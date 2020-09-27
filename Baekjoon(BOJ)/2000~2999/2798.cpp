#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N,M;
    cin>>N>>M;
    
    int* ar = new int[N];
    for(int i=0; i<N; i++)
        cin>>ar[i];
        
    int maxSum=0;
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                int sum=ar[i]+ar[j]+ar[k];
                if(maxSum<sum && sum <=M)
                    maxSum = sum;
            }
        }
    }
    
    cout<<maxSum;
    
    return 0;
}
