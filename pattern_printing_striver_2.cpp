#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        int twos=2;
        for(int j=1 ; j<=i;  j++){
            cout<<j<<' ';
        }
        for(int j=0 ; j<2*((2*n)-2*i) ; j++){
            cout<<' ';
        }
        for(int j=i ; j>0 ; j--){
            cout<<j<<' ';
        }
        twos*=2;
        cout<<endl;
    }
    return 0;
}