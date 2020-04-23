#include <iostream>
#include <string>
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    char input[51]="";
    cin>>input;
    
    int sum = 0;
    int num = 0;
    int answer = 0;
    int ar[50];
    int index = 0;
    
    for(int i=0; input[i]; i++){
        if(input[i]>='0' && input[i]<='9')
            num = 10*num + (input[i]-'0');
        else{
            sum += num;
            if(input[i]=='-'){
                ar[index] = sum;
                index++;
                sum = 0;
            }
            num = 0;
        }
    }
    ar[index] = sum+num;
    
    answer = ar[0];
    for(int i=1; i<=index; i++)
        answer -= ar[i];
    
    cout<<answer;
    
    return 0;
}