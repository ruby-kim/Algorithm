#include <iostream>

using namespace std;

int main() 
{
    int arr[8], cnt = 0, dcnt = 0;
    for (int i = 0; i < 8; i++){
        cin >> arr[i];
        if (arr[i] == i + 1)
            cnt++;
        else if (arr[i] == 8 - i)
            dcnt++;
    }
    
    if (cnt == 8)
        cout << "ascending" << '\n';
    else if (dcnt == 8)
        cout << "descending" << '\n';
    else
        cout << "mixed" << '\n';
        
    return 0;
}
