#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        cout << "YES" <<'\n';
    }
    else{
        cout <<"NO" <<'\n';
    }
    return 0;
}