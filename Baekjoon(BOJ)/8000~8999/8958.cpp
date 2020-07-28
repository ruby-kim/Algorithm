#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin>>N;
    
    vector<char> v[100];
    int tmp = 0;
    int sum = 0;
    string quiz;
    for(int i=0; i<N; i++){
        cin>>quiz;
        for(int j=0; j<quiz.size(); j++)
            v[i].push_back(quiz[j]);
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]=='O') tmp++;
            else tmp=0;
            sum += tmp;
        }
        cout<<sum<<endl;
        sum = 0;
        tmp = 0;
    }

    return 0;
}