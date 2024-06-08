#include<bits/stdc++.h>
using namespace std;
int sum=0;
int solve1(int n){
    sum+=n;
    if(n<1){
        return sum;
    }
    solve1(n-1);
}
int solve2(int n){
    if(n==0){
        return sum;
    }
    solve2(n-1);
}
int power=1;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin >> n;
    int ans=solve1(n);
    cout<<ans<<endl;
    cout<<solve2(n)<<endl;
    cout<<fact(n)<<endl;
}