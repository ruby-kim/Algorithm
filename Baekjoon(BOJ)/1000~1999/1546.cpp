#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    int sum = 0;
    cin>>N;
    
    int* ar = new int[N];
    for(int i=0; i<N; i++){
        cin>>ar[i];
        sum += ar[i];
    }
    int max = *max_element(ar,ar+N);
    
    printf("%.2f", ((float(sum)/max)*100)/N);
    
    delete[] ar;
    return 0;
}