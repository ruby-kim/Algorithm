#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    int cnt = 0;
    string ar[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    bool check1 = false;
    bool check2 = false;
    
    cin>>str;
    for(int i=0; i<str.length(); i++){
        string word1 = str.substr(i, 2);
        string word2 = str.substr(i, 3);
        
        for(int j=0; j<8; j++){
            if(word1==ar[j]){
                check1 = true;
                break;
            }
            if(word2==ar[j]){
                check2 = true;
                break;
            }
        }
        cnt++;
        if(check1) i++;
        if(check2) i+=2;
        check1 = check2 = false;
    }
    
    cout<<cnt;
    
    return 0;
}
