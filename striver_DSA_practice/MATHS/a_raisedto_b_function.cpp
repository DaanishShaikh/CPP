#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans=1;
    while(b){
        if(b%2==1){
            ans*=a;
            b/=2;
            a*=a;
        } else {
            b/=2;
            a*=a;
        }
    }
    cout<<ans<<endl;
    return 0;
}