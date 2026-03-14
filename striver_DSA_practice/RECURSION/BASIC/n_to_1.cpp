#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n){

    } else {
        return;
    }
    cout<<n<<' ';
    solve(--n);
}
int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}