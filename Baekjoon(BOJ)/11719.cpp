#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string sentence;
    while(getline(cin, sentence))
        cout<<sentence<<endl;

    return 0;
}