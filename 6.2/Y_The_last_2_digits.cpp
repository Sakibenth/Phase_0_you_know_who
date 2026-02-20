#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int result=(a*b*c*d)%100;
    if(result<10){
        cout<<0<<result<<'\n';
    }
    else{
        cout<<result<<'\n';
    }
    return 0;
}