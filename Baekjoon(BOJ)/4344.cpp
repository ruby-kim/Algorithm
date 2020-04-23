#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int C, N;
    int tmp;
    float pass = 0;
    float avg = 0;
    vector<int> v[100];

    cin>>C;
    for(int i=0; i<C; i++){
        cin>>N;
        for(int j=0; j<N; j++){
            cin>>tmp;
            v[i].push_back(tmp);
            avg += tmp;
        }
        avg /= N;
        for(int j=0; j<N; j++)
           if(v[i][j]>avg) pass++;
        printf("%.3f%\n", (pass/N)*100);
        avg = 0;
        pass = 0;
    }

    return 0;
}
