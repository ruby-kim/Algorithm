#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool Check(string str)
{
    int len = str.length();
    stack<char> st;
    
    for(int i=0; i<len; i++){
        char c = str[i];
        
        if(c == '(')
            st.push(str[i]);
        else{
            if(!st.empty() && st.top()=='(')
                st.pop();
            else
                return false;
        }
    }
    return st.empty(); //안비어있을 수도 있음 
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++){
        string str;
        cin >> str;
        
        if(Check(str))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
