#include<bits/stdc++.h>
using namespace std;
// string palindrome(string s,int i){
//     if(i>=s.size()/2){
//         return s;
//     }
//     swap(s[i],s[s.size()-i-1]);
//     return palindrome(s,i+1);
// }
bool palindrome2(string s,int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-1-i]){
        return false;
    }
    i++;
    return palindrome2(s,i);
}
int main(){
    string s;
    cin >> s;
    int i=0;
    //string t;
    // t=palindrome(s,i);
    // cout<<"t="<<t<<endl;
    // if(palindrome(s,i)==s){
    //     cout<<"YES"<<endl;
    // } else {

    //     cout<<"NO"<<endl;
    // }
    if(palindrome2(s,i)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}