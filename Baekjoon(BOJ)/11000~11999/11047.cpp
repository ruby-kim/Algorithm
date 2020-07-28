# include <iostream>
# include <algorithm>
# include <vector>
# include <functional> //greater 사용

using namespace std;

int main()
{
    int N, K, cnt=0; //동전개수 N, 입력값 K, 결과값 cnt
    vector<int> ar;
    cin>>N>>K;
    
    // 동전 값 입력
    for(int i=0; i<N; i++){
        int coin;
        cin>>coin;
        ar.push_back(coin);
    }

    sort(ar.begin(), ar.end(), greater<int>() ); //내림차순

    for(int i=0; i<N; i++){
        cnt += K/ar[i];
        K %= ar[i];
    }
    
    cout<<cnt;
    
    return 0;
}
