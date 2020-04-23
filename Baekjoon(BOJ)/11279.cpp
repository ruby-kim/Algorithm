#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n, tmp;
    priority_queue<int, vector<int>> pq; // 내림차순
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&tmp);
        if(tmp==0){
            if(pq.size()==0)
                printf("%d\n",pq.size());
            else{
                printf("%d\n",pq.top()); //가장 큰 값 출력
                pq.pop();
            }
        }
        else
            pq.push(tmp);
    }
    return 0;
}