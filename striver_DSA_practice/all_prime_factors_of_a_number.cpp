#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>prime_factors;
    for(int i=2 ; i<sqrt(n) ; i++){
        if(n%i==0){
            prime_factors.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        prime_factors.push_back(n);
    }
    for(auto c:prime_factors){
        cout<<c<<' ';
    }
    return 0;
}