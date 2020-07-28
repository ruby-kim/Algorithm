#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n=0;
    vector<int> v;
    for(int i=0; i<50; i++){
        int tmp=0;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), greater<int>());
    cin>>n;
    string s = "";
    vector<int>::iterator iter = find(v.begin(), v.end(), n);
    int idx = iter - v.begin();
    if(idx<5) s+="A+";
    else if(idx<15) s+="A0";
    else if(idx<30) s+="B+";
    else if(idx<35) s+="B0";
    else if(idx<45) s+="C+";
    else if(idx<48) s+="C0";
    else s+="F";
    
    cout<<s;
    
    return 0;
}