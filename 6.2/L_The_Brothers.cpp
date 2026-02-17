#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s[4];
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    if(s[1]==s[3]){
        cout <<"ARE Brothers"<<'\n';
    }
    else{
        cout <<"NOT"<<'\n';
    }
    return 0;
}