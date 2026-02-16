#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    //manual approach
    // if(n<0){
    //     cout << -n <<'\n';
    // }
    // else{
    //     cout << n <<'\n';
    // }
    //built in function approach
    cout << abs(n) << '\n';
    double x=sqrt(25); //takes int/floating point value return floating point value
    cout << x << '\n'; 
    double y=cbrt(27); //takes int/floating point value return floating point value
    cout << y << '\n';
    double z=pow(2,3); //takes two int/floating point value return floating point value
    cout << z << '\n';
    int k=2.31;
    cout << ceil(k) <<'\n';
    cout << floor(k) <<'\n';
    cout << round(k) <<'\n'; //if the fractional part is 0.5 or more, it rounds up to the next integer, otherwise it rounds down to the previous integer.
    return 0;
}