#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    x++;
    cout << x << '\n';  //increments the value of x
    int y=++x;    //increment then assign
    int z=x++;    //assigns then increments the value of x
    cout << y << '\n';
    cout << z  << '\n';
    cout << x <<'\n';
    return 0;
}