#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int size1, size2, ans = 65536;
    double all = 0, dup = 0;
    string str1, str2;
    map<string, int> map1;
    
    getline(cin, str1);
    getline(cin, str2);
    
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    size1 = str1.size();
    size2 = str2.size();
    
    for (int i = 0; i < size1-1; i++) {
        if (str1[i] < 'a' || str1[i] > 'z') continue;
        if (str1[i+1] < 'a' || str1[i+1] > 'z') continue;
        
        string str;
        str = str1[i];
        str += str1[i+1];
        all++;
        
        if (map1.count(str))    map1[str]++;
        else    map1[str] = 1;
    }
    
    for (int i = 0; i < size2-1; i++) {
        if (str2[i] < 'a' || str2[i] > 'z') continue;
        if (str2[i+1] < 'a' || str2[i+1] > 'z') continue;
        
        string str;
        str = str2[i];
        str += str2[i+1];
        
        if (map1.count(str)) {
            if (map1[str] > 0) {
                map1[str]--;
                dup++;
            }
            else    all++;
        }
        else
            all++;
    }
    
    if (all != 0)
        ans = (int)((double)ans * (dup / all));
    cout << ans;
    
    return 0;
}

