#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans="";
    for(int i=1;i<s.size();i++){
        ans+=s[i];
    }
   cout << ans <<'\n';
   return 0;
}