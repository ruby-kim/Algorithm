#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int pCnt=0, yCnt=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='p' || s[i]=='P') pCnt++;
        if(s[i]=='y' || s[i]=='Y') yCnt++;
    }

    if(pCnt==yCnt) answer = true;
    else answer = false;
    
    return answer;
}