#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int cnt = 0; //단어 내 몇개가 있는지 카운트. 항상 초기화 바람
    int maxcnt = 0;
    int ar[26] = {0};
    int index = 0;
    
    string word;
    cin>>word;
    
    for(int i=0; i<word.length(); i++){
        int n = word.at(i);
        if(n < 97) ar[n-65]++;
        else ar[n-97]++;
    }
    
    for(int i=0; i<26; i++){
        if(ar[i] > maxcnt){
            maxcnt = ar[i];
            index = i;        
        }
    }
    
    for(int i=0; i<26; i++){
        if(ar[i] == maxcnt){
            if(index != i){
                cout<<"?";
                return 0;
            }
        }
    }
        
    
    cout<<(char)(index+'A');
    
    return 0;
}
