#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    int cnt = 1;
    for(int i=0; i<str.length(); i++){
        if(str.at(i) == ' ')
            cnt++;
    }
    
    if(str.at(0) == ' ') cnt--;
    if(str.at(str.length()-1) == ' ') cnt--;
    
    cout<<cnt;
    return 0;
}