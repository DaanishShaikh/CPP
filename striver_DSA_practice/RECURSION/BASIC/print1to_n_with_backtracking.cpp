#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n<1){
        return;
    }
    solve(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}