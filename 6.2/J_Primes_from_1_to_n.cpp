#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    int cnt=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
        if(cnt==0 && n!=1){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(prime(i)){
            cout << i <<" ";
        }
    }
    cout <<'\n';
    return 0;
}