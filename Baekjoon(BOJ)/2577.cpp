#include <iostream>
#include <array>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    
    int total = A*B*C;
    array<int, 10> ar = {0};
    while(total!=0){
        ar[total%10]++;
        total /= 10;
    }
    
    for(int i=0; i<10; i++)
        cout<<ar[i]<<endl;
    
    return 0;
}