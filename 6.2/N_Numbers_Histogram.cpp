#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ch ; cin >> ch;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int elem;
        cin >> elem;
        for(int j=0;j<elem;j++){
            cout<<ch;
        }
        cout<<'\n';
    }
    return 0;
}