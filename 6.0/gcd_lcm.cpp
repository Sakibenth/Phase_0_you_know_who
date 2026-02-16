#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    int gcd=__gcd(a,b); //built in function to calculate gcd
    cout << "GCD: " << gcd << '\n';
    int lcm=(a*b)/gcd; //lcm can be calculated using gcd
    cout << "LCM: " << lcm << '\n';
    return 0;
}