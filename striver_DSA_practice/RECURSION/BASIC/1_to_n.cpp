#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m){
    if(m==0){
        return;
    }
    cout<<n<<' ';
    solve(++n,--m);
}
int main(){
    int n;
    cin >> n;
    solve(1,n);
}