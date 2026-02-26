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
        for(int k=0;k<star;k++){
            cout<<"*";
        }
        cout <<'\n';
    }
    for(int i=n;i>=1;i--){
      int space=n-i;
      int star=2*i-1;
      for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int k=0;k<star;k++){
            cout<<"*";
        }
        cout <<'\n';
    }
    return 0;
}