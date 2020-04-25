#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    vector<int> tmp;
    vector<pair<int, vector<int>>> pv;   // string -> int
    int num = 0;
    
    for(int i=1; i<s.size()-1; i++){      // except first '{'  &  last '}'
        if(s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
        }
        else if(s[i] == '{') continue;
        else if(s[i] == ','){
            if(s[i-1] == '}') continue;
            tmp.push_back(num); // make perfect int num
            num = 0;
        }
        else if(s[i] == '}'){   // make perfect tuple
            tmp.push_back(num);
            pv.push_back(make_pair(tmp.size(), tmp));
            num = 0;
            tmp.clear();
        }
    }
    sort(pv.begin(), pv.end());

    set<int> check;
    for(pair<int, vector<int>> p: pv){
        for(int num: p.second){
            if(check.find(num) == check.end()){
                check.insert(num);
                answer.push_back(num);
            }
        }
    }
    
    return answer;
}