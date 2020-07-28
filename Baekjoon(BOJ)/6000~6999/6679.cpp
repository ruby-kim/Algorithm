### c++14

#include<iostream>

const int MAX = 9999;
const int Min = 1000;

using namespace std;

int main()
{
    int oct, deci, hexa; 
    for(int i=Min; i<=MAX; i++){
        oct=0, deci=0, hexa=0;   
        
        // 10진수 각 자리수의 합
        for(int j=i; j>0; j/=10)
            oct+=j%10;
        // 12진수 각 자리수의 합
        for(int j=i; j>0; j/=12)
            deci+=j%12;
        // 16진수 각 자리수의 합
        for(int j=i; j>0; j/=16)
            hexa+=j%16;
        
        if(oct==deci && deci==hexa)
            cout << i << endl;
    }
 
    return 0;
}
