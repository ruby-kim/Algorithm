#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    int cnt = 0;
    
    cin>>str;
    for(int i=0; i<str.length(); i++){
        int n = (int)str.at(i) - (int)'A';
        //A B C
        if(n<3) cnt += 2;
        
        //D E F
        else if(n>=3 && n<6) cnt += 3;
        
        //G H I
        else if(n>=6 && n<9) cnt += 4;
        
        //J K L
        else if(n>=9 && n<12) cnt += 5;
        
        // M N O
        else if(n>=12 && n<15) cnt += 6;
        
        // P Q R S
        else if(n>=15 && n<19) cnt += 7;
        
        // T U V
        else if(n>=19 && n<22) cnt += 8;
        
        // W X Y Z
        else if(n>=22 && n<26) cnt += 9;
    }   
    
    cout<<cnt+str.length();;
    
    return 0;
}
