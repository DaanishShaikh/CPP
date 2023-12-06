#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary code= ";
    cin>>n;
    int lastdigit=0;
    int powerof2=1;
    int answer=0;
    while(n>0){
     lastdigit=n%10;
     powerof2*=2;
     answer+=lastdigit*powerof2;
     n=n/10;
    }
    cout<<answer;
}