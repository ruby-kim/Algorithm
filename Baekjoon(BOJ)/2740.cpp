#include <iostream>

using namespace std;

int N, M;  // 행렬 A = N*M
int K;     // 행렬 B = M*K

int A[100][100]; // 행렬 A
int B[100][100]; // 행렬 B
int answer[100][100];

int tmp = 0;
    
int main()
{
    /***** 행렬 A 입력 *****/
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &tmp);
            A[i][j] = tmp;
        }
    }
    
    /***** 행렬 B 입력 *****/
    scanf("%d %d", &M, &K);
    for(int i=0; i<M; i++){
        for(int j=0; j<K; j++){
            scanf("%d", &tmp);
            B[i][j] = tmp;
        }
    }
    
    
    /***** 계산 *****/
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            for(int k=0; k<M; k++){
                answer[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    /***** 출력 *****/
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            printf("%d ",answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}