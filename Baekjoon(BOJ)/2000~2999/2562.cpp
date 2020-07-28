#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> v;
    int tmp;
    for(int i=0; i<9; i++){
        cin>>tmp;
        v.push_back(tmp);
    }

    int result = v.front();
    int idx = 0;
    for(int i=1; i<9; i++){
        if(result < v[i]){
            result = v[i];
            idx = i;
        }
    }

    cout<<result<<endl<<idx+1;
    
    return 0;
}