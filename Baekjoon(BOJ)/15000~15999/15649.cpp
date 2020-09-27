#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;
int ar[9];
int visited[9];

void dfs(int x)
{
    if (x == M)
    {
        for (int i = 0; i < M; i++)
            cout << ar[i] << " ";
        cout << "\n";
        return;
    }
    
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            ar[x] = i;
            dfs(x + 1);
            visited[i] = 0;
        }
    }
}

int main()
{
    cin >> N >> M;
    dfs(0);
    return 0;
}
