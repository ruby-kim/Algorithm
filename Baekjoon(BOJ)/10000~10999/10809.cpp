#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    
    for(int i=0; i<26; i++)
        if(str.find('a'+i) != string::npos)
            cout<<str.find('a'+i)<<" ";
        else cout<<"-1 ";
    return 0;
}