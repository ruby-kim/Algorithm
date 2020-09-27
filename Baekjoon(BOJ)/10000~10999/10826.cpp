#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

string fibo[10001];
int n;

string calc(string s1, string s2)
{
    string res;
    int len1 = s1.length();
    int len2 = s2.length();
    int carry_before;
    int carry_now = 0;
    
    if (len1 < len2)
    {
        for (int i = 0; i <len2 - len1; i++)
            s1.insert(s1.begin(), '0');
        len1 = len2;
    }
    else if (len1 > len2)
    {
        for (int i = 0; i < len1 - len2; i++)
            s2.insert(s2.begin(), '0');
    }
    
    for (int i = len1 - 1; i >= 0; i--)
    {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        carry_before = carry_now;
        
        if (a + b + carry_before < 10)
        {
            carry_now = 0;
            res += (a + b + carry_before) + '0';
        }
        else 
        {
            carry_now = 1;
            res += (a + b + carry_before - 10) + '0';
            if (i == 0 && carry_now == 1) res += '1';
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    cin >> n;
    fibo[0] = '0';
    fibo[1] = '1';
    for (int i = 2; i <= n; i++)
        fibo[i] = calc(fibo[i - 1], fibo[i - 2]);
    cout << fibo[n];

    return 0;
}
