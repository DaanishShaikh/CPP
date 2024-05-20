#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v(3);
    // for(int i=0 ; i<3 ; i++){
    //     cin>>v[i];
    // }
    string v;
    cin >> v;
    do{
        cout<<v<<endl;
    } while(next_permutation(v.begin(),v.end()));

    return 0;
}