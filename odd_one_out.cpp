#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << c << "\n";
    }
    else if (a == c) {
        cout << b << "\n";
    }
    else {
        cout << a << "\n";
    }
    cout<<pow(a,b); 
    }
       
    return 0;
}