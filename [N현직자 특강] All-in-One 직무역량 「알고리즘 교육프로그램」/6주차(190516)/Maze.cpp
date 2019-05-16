#include <iostream>
#include<algorithm>
#include<queue>

using namespace std;

int maze[5][5]=
{
    1,1,1,1,1,
    1,0,1,0,0,
    1,0,1,1,1,
    1,0,0,1,0,
    1,1,1,1,1
};

int cnt=0;

void DFS(int x, int y)
{
    if(y==4 && x==4) cnt++;
    else{
        maze[y][x]=0;
        
        if(x<4 && maze[y][x+1]==1) DFS(x+1,y);
        if(x>0 && maze[y][x-1]==1) DFS(x-1,y);
        if(x<4 && maze[y+1][x]==1) DFS(x,y+1);
        if(x>0 && maze[y-1][x]==1) DFS(x,y-1);
    }
}

int main()
{
    DFS(0,0);
    cout<<cnt<<endl;
    return 0;
}
