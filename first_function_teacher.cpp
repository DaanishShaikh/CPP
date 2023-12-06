#include <iostream>
using namespace std;
                                    //it doesnt matter whether function is declared above or below main function
int add(int num1, int num2){
    int sum= num1+num2;
    return sum;
}
int main(){
    int a=5;
    int b=4;
    cout<<add(a,b)<<endl;

    return 0;
}
