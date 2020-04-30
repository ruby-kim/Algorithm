#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
string solution(vector<string> par, vector<string> com) 
{
 
    string answer = "";
    
    sort(par.begin(), par.end());
    sort(com.begin(), com.end());
    
    for(int i = 0; i < par.size(); i++){
        if(par[i] != com[i]){
            answer = par[i];
            return answer;
        }
    }
}