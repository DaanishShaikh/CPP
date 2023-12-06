#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
float a=5.9;   //or int a=5;  //int a=5;       when 2 integers are used, the first function works, 
float b=1.1;   //   int b=6;  //int b=6;       when 3 integers are used, the second one is called,
                              //int c=7;       when 2 float numbers are used, the 3rd function is called.
cout<<add(a,b)<<endl;
return 0;
}
