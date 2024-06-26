#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ;i++){
        cin >> v[i];
    }
    for(int i=1 ; i<n ; i++){
        cout<<lcm(v[i-1],v[i]);
    }
    return 0;
}