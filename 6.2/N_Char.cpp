#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ch;
    cin >> ch;
    if(isupper(ch)){
        cout <<(char)tolower(ch)<<'\n';
    }
    else if(islower(ch)){
        cout <<(char)toupper(ch)<<'\n';
    }
     return 0;
}