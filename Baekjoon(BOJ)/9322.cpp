#include <iostream>
#include <string>
 
using namespace std;
 
int main(void) 
{
    int T,N; // 테스트 케이스 T, 한문장의 단어 수 N
    cin >> T;
     
    while(T) {
        cin >>N;
        string str1[N]; //제1 공개키 저장 
        string str2[N]; //제 2 공개키 저장 
        string str3[N]; //암호문 저장
        string str4[N]; //해독문 저장 
        
        // 리스트 인덱스를 활용하기 위한 n,j,k
        int n = 0;
        int j = 0;
        int k = 0;
        for(int i = 0; i < N; i++)
            cin>>str1[n++];
         
        for(int i = 0; i < N; i++)
            cin>>str2[j++];
         
        for(int i = 0; i < N; i++) 
            cin>>str3[k++];
         
        for(int i = 0; i < N; i++)  
            for(int j = 0; j < N; j++)
                if(str2[i] == str1[j]) //2공개키와 1공개키의 값이 같으면 
                    str4[j] = str3[i]; // i번째 인덱스가 j번째 인덱스로 간다고 생각하고 해독문을 채운다. 
                     
        for(auto n : str4)
            cout<<n<<" ";
            cout<<"\n";
        T--;            
    }
    return 0;
}