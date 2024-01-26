#include<iostream>
using namespace std;
int main(){
    bool n[100];
    for(int j=0;j<=5;j++){
        for(int i=0; i<=5; i++){
            cin>>n[i];
            cout<<n[i];
            if(n[i]==1){
                break;
            }
        }
        
    }
    return 0;
}