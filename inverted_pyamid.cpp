#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int k=n;
    int ii=0;
    for(int i=0 ; i<n ; i++){
        
        for(int j=0; j<n ; j++){
            if(j==k||j==ii){continue;}
            cout<<'*';
        }
        cout<<endl;
        k--;
        ii=i;
    }
    return 0;
}