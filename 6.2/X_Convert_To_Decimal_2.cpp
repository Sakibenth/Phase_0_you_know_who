#include <bits/stdc++.h>
using namespace std;
int dec_bin(int n){
     int cnt=0;
     while(n!=0){
        int rem=n%2;
        if(rem==1){
           cnt++;
        }
        n/=2;
     }
     return cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=dec_bin(n);
        int result=pow(2,cnt)-1;
        cout<< result << '\n';
    }
    return 0;
}