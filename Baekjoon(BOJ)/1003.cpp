#include <iostream>
 
using namespace std;
 
int T, N;
int DP[42][2];
 
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
 
    DP[0][0] = 1; DP[0][1] = 0;
    DP[1][0] = 0; DP[1][1] = 1;
    for (int i = 2; i < 42; ++i)
    {
        DP[i][0] = DP[i - 1][0] + DP[i - 2][0];
        DP[i][1] = DP[i - 1][1] + DP[i - 2][1];
    }
 
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> N;
        cout << DP[N][0] << " " << DP[N][1] << '\n';
    }
    return 0;
}
