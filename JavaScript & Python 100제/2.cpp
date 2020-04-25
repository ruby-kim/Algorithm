#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> l = {200, 100, 300};
    
    l.insert(l.begin()+2, 10000);

    // check result
    for(int i=0; i<l.size(); i++)
        printf("%d ", l[i]);
    
    return 0;
}