#include<bits/stdc++.h>
using namespace std;
int main(){
    int z=1;
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<z<<' ';
            z++;
        }
        for(int j=1 ; j<=n-i ; j++){
            cout<<' ';
        }
        cout<<endl;
    }
}