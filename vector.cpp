#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x=v.size();
    cout<<x;
    v={1,2,3};
    for(int i=0 ; i<3 ; i++){
        cin>>v[i];
    }
    for(int k=0 ; k<3 ; k++){
        cout<<v[k]<<endl;       //prints vector elements
    }
    int l=v.size();
    cout<<l;
    
    return 0;
}