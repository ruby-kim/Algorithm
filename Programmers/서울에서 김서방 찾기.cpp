#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    char ans[5]="";
    int idx = 0;
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i]=="Kim"){
            idx = i;
            break;
        }
    }
    
    answer += to_string(idx);
    answer += "에 있다";
    
    return answer;
}