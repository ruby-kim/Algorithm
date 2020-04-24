#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {100, 200, 300, 400, 500};
    
    nums.pop_back();	// 500
    nums.pop_back();	// 400
    
    // check result
    for(int i=0; i<nums.size(); i++)
        printf("%d ", nums[i]);
    
    return 0;
}