#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=3;j++){
            cout << k <<" ";
            k++;
        }
        k++;
        cout <<"PUM"<<"\n";
    }
    return 0;
}