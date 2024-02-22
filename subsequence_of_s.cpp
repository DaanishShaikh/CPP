#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t; 
    cin>>t;
    int count=0;
    for(int i=0,j=0 ; i<s.size() ; i++){
        if(s[i]==t[j]){
            count++;
            // cout<<"s["<<i<<"]="<<s[i]<<' '<<"t["<<j<<"]"<<t[j]<<' ';
            j++;
            
        }
        if(j==t.size()){break;}
    }
    if(count==t.size()){
        cout<<"t is a subsequence of s";
    }
    return 0;
}