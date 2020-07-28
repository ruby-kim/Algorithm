#include <iostream>

using namespace std;

int leap_year(int n)
{
    if(n%4==0 && (n%100!=0 || n%400==0)) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int year;
    cin>>year;
    
    cout<<leap_year(year);
    
    return 0;
}