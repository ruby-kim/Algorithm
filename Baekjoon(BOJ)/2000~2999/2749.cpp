#include<iostream>

using namespace std;

int main()
{ 
    unsigned long long N; 
    scanf("%lld", &N); 
    int *fibonacci = new int[1500001]; 
    fibonacci[1] = 1; 
    for(int i = 2; i <= 1500000; i++){ 
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1000000; 
    } 
    printf("%d", fibonacci[N % 1500000]); 
}