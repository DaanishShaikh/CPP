#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>&v,int i,int j){
    if(i>=j){
        return v;
    }
    swap(v[i],v[j]);
    solve(v,i+1,j-1);

}
vector<int> solve2(vector<int>&v , int i){
    if(i>=v.size()/2){
        return v;
    }
    swap(v[i],v[v.size()-i-1]);
    solve2(v,i+1);
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    solve2(v,0);
    for(auto c:v){
        cout<<c<<' ';
    }

    return 0;
}