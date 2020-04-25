#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n=0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<n-i-1; j++)
    		printf(" ");
    	for(int j=0; j<2*i+1; j++)
    		printf("*");
    	printf("\n");
    }
    
    return 0;
}