#include<bits/stdc++.h>
using namespace std;
void solve(int i, int n){
    if(i>n){
        return;
    }
    solve(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin >> n;
    solve(1,n);
}