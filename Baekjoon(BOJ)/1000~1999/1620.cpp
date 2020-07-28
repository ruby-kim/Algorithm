#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // cin,cout 입출력 시간 줄이기 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // 포켓몬 N마리, 문제 M개
    int N, M;
    cin >> N >> M;
    
    // 포켓몬 이름만 저장( 문제에서 숫자를 입력받았을 시 답을 O(1)로 접근 )
    vector<string> Pokemon(N+1);
    for (int i = 1; i <= N; ++i)
        cin >> Pokemon[i];
 
    //포켓몬 이름과 번호를 저장하는 벡터
    vector<pair<string, int>> Book(N);
    for (int i = 0; i < N; ++i){
        Book[i].first = Pokemon[i+1];
        Book[i].second = i + 1;
    }
 
    sort(Book.begin(), Book.end());
    for (int i = 0; i < M; ++i){
        string input;
        cin >> input;
 
        // 숫자 입력: 정수로 변환
        if (input[0] >= '0' && input[0] <= '9'){
            int idx = stoi(input);
            cout << Pokemon[idx] << '\n';
        }
        
        // 이름 입력
        else{
            //이분 탐색
            int start = 0;
            int end = Book.size();
            int div = (start + end) / 2;
            while (Book[div].first != input){
                if (Book[div].first < input)
                    start = div;
                else if (Book[div].first > input)
                    end = div;
                div = (start + end) / 2;
            }
            cout << Book[div].second << '\n';
        }
    }
}  