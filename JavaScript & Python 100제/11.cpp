#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s = 0;
    for(int i=1; i<101; i++)
    	s += i;
    printf("%d", s);	// 5050
    
    return 0;
}