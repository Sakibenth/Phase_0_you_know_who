#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> a;
    int first_digit=a/1000;
    if(first_digit%2==0){
        cout <<"EVEN"<<'\n';
    }
    else{
        cout <<"ODD"<<'\n';
    }
     return 0;
}