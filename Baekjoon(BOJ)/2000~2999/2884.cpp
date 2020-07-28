#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int hour,minute;
    cin>>hour>>minute;
    
    minute -= 45;
    if(minute<0){
        minute += 60;
        hour--;
    }
    
    if(hour<0) hour += 24;
    
    cout<<hour<<" "<<minute;
    
    return 0;
}