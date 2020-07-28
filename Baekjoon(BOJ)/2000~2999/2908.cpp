#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int changeNum(int n)
{
    return (n%10)*100 + ((n/10)%10)*10 + (n/100);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int A,B;
    cin>>A>>B;
    
    int chgA = changeNum(A);
    int chgB = changeNum(B);
    
    cout<<max(chgA,chgB);
    
    return 0;
}
