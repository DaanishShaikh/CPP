#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to convert to binary = ";
    cin>>n;
    
    int power=1;
    int number=0;
    while(n>0){
        int parity=0;
        parity=n%2;
        number+=parity*power;
        power*=10;
        n=n/2;
    }
    cout<<number;
    return 0;

}