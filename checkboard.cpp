#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
        for(int j=1;j<=n;j++){
            if(j%2==1){
                cout<<'X';
            }
            else{
                cout<<'O';
            }
        }
    }
    else{
        for(int j=1;j<=n;j++){
            if(j%2==1){
                cout<<'O';
            }
            else{
                cout<<'X';
            }
        }
    }
     cout<<'\n';
}   
}