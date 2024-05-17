#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<char>>v((2*n)+1,vector<char>(n));
    for(int i = 0;  i<n ; i++){
        for(int j=0 ; j<n-1 ; j++){
            v[j][i]=' ';
        }
        char c='A';
        for(int j=n-i-1 ; j<n ; j++){
            v[j][i]=c;
            c++;
        }
    }
    for(int i = n+2;  i<(2*n)+1 ; i++){
        int z=n-1;
        int y=0;
        for(int j=0 ; j<y+1 ; j++){
            v[j][i]=' ';
        }
        char c='A';
        for(int j=y ; j<z ; j++){
            v[j][i]=c;
            c++;
        }
        y++;
        z--;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<(2*n) +1 ; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}