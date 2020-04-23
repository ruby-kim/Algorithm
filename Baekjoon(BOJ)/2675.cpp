#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    int P;
    string str;
    for(int i=0; i<N; i++){
        cin>>P>>str;
        for(int j=0; j<str.size(); j++)
            for(int k=0; k<P; k++)
                cout<<str[j];
        cout<<endl;
    }
    return 0;
}