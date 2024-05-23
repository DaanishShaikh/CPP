#include<bits/stdc++.h>
using namespace std;
int digits(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    int temp=n;
    int sum=0;
    while(temp){
        sum+=pow(temp%10,digits(n));
        cout<<temp%10<<' '<<sum<<endl;
        temp/=10;
    }
    cout<<sum<<endl;
    if(sum==n){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}