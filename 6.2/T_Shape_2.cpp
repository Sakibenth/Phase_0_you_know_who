#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        int star=2*i-1;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}