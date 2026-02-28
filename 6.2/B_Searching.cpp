#include  <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i]; 
    }
    cin >> x;
    int at=-1;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            at=i;
            break;
        }
    }
    cout << at << '\n';
    return 0;
}