#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int n[5][5];
    for(int j=0;j<=4;j++){
        for(int i=0; i<=4; i++){
            cin>>n[j][i];
            if(n[i][j]==1){
            x = i;
            y = j;
            }           
        }   
    }
    int z=2-x;
    int u=2-y;
    if (z<0){
        z=z*(-1);
    }
    if(u<0){
            u=u*(-1);
    }    
    cout<<z+u;
    return 0;
}