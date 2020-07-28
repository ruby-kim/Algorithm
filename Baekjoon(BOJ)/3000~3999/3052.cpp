#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int N;
    bool judge = true;
    for(int i=0; i<10; i++){
        cin>>N;
        if(i==0) v.push_back(N%42);
        else{
            if(find(v.begin(), v.end(), N%42) == v.end())
                v.push_back(N%42);
        }
    }
    
    cout<<v.size();

    return 0;
}