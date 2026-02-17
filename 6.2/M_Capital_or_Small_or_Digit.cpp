#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char a;
    cin >> a;
    if(isalpha(a)){
        cout <<"ALPHA"<<'\n';
        if(isupper(a)){
            cout <<"IS CAPITAL"<<'\n';
        }
        else{
            cout <<"IS SMALL"<<'\n';
        }
    }
    else{
        cout <<"IS DIGIT"<<'\n';
    }
    return 0;
}