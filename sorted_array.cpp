#include<iostream>
using namespace std;
int main(){
    int a[6]={1,5,7,8,13,27};
int num;
int index;
cin>>num;
    for(int i=0 ; i<6 ; i++){
        if(a[i]>num){
            index=i;
            break;
        }
    }
    cout<<index;
}