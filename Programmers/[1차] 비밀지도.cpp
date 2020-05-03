#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0; i<n; i++){
        int tmp = arr1[i] | arr2[i];
        string tmp_answer = "";
        for(int j=0; j<n; j++){
            if(tmp%2 == 0) tmp_answer += " ";
            else tmp_answer += "#";
            tmp /= 2;
        }
        reverse(tmp_answer.begin(), tmp_answer.end());
        answer.push_back(tmp_answer);
    }
    
    return answer;
}