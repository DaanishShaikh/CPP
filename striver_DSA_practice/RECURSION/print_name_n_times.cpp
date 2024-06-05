//time complexity = O(n)
//space complexity = O(n)
#include<bits/stdc++.h>
using namespace std; 
void solve(int i,int n){
    i++;
    cout<<"DAANISH"<<endl;
    if(i>n){
        return;
    }
    solve(i,n);
}
int main(){
    int n; 
    cin >> n;
    solve(1,n);
    return 0;
}