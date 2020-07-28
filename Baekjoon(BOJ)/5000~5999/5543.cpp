#include <iostream>

using namespace std;

int main()
{
    int minBurger=0, minCoke=0;
    int tmp;
    
    for(int i=0; i<3; i++){
        cin>>tmp;
        if(i==0) minBurger=tmp;
        
        if(tmp<minBurger) minBurger=tmp;
    }
    
    for(int i=0; i<2; i++){
        cin>>tmp;
        if(i==0) minCoke=tmp;
        
        if(tmp<minCoke) minCoke=tmp;
    }
    
    cout<<minCoke+minBurger-50;
    
    return 0;
}
