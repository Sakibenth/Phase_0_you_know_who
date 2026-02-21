#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool flag=true;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]==s[s.size()-1-i]){
            continue;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout << s <<'\n';
        cout << "YES" <<'\n';
    }
    else{
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                cnt++;
            }
            else{
                break;
            }
        }
        int actual_element=s.size()-cnt;
        for(int i=actual_element-1;i>=0;i--){
            cout << s[i];
        }
        cout << '\n';
        cout <<"NO" <<'\n';
    }
    return 0;
}