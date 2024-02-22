#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b;
    cin>>b;
    int n;
    cin>>n;
    vector<int>c(n);
    int count=0;
    for(int i=0,j=0,k=0 ; i<n ; i++){
        if(i==c[j]){
            s[i]='#';
            j++;
        }
        if(s[i]==b[k]){
            count++;
            if(k==b.size()){break;}
            k++;
        }
    }
    if(count==b.size()){
        cout<<"YES";
    }
    return 0;
}