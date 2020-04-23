#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while (1){
        string s; // 문장
        getline(cin, s);
        stack<char> st; //스택

        if (s.length() == 1 && s[0] == '.')
            break;
     
        bool flag = true;
        for (int i = 0; i < s.length(); i++){
            // 여는 괄호는 무조건 push
            if (s[i]=='(' || s[i]=='{' || s[i]=='[') 
                st.push(s[i]);
    
            // 닫는 괄호의 경우 s[i]에 따라 pop
            else if (s[i]==']' || s[i]=='}' || s[i]==')'){
                if (!st.empty() && (st.top()=='[') && (s[i]==']') )
                    st.pop();
                else if (!st.empty() && (st.top()=='{') && (s[i]=='}') )
                    st.pop();
                else if (!st.empty() && (st.top()=='(') && (s[i]==')') )
                    st.pop();
    
                else{
                    flag = false;
                    break;
                }
            }
        }
        
        // 결과값 출력
        if (flag && st.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}