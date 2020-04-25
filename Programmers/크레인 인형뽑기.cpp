#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int board_size = board.size();
    stack<int> s;
    
    for(int i: moves){
        i -= 1;
        for(int j=0; j<board_size; j++){
            if(board[j][i] != 0){   // select board elem
                if(!s.empty() && s.top()==board[j][i]){     // check boom
                    s.pop();
                    answer += 2;
                }
                else s.push(board[j][i]);
                board[j][i] = 0;
                break;
            }
        }
    }
    return answer;
}