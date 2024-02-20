#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <bool> v(n);
    for(int i=0 ; i<n ; i++){
        v[i]=true;
    }
    //true means closed
    //false means open
    for(int j=1 ; j<n ; j++){
        for(int k=0 ; k<n ; k++){
            // cout<<v[k];
            if((k+1)%j==0){
                v[k]=!v[k];
            }
            else{
                continue;
            }
        }
                    // cout<<endl;

    }
    for(int j=0; j<n ; j++){
        if (v[j]==true){
            cout<<'c';
        }
        else{
        cout<<'o';
        }
    }
    int counto=0, countc=0;
    for(int j=0 ; j<n ; j++){
        if(v[j]==true){
            countc++;
        }
        else{
            counto++;
        }
    }
    cout<<endl<<"closed="<<countc<<"open="<<counto;
    return 0;
}