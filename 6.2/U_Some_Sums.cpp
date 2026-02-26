#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    else{
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b; cin >> n >> a >> b;
    int sum=0;
    for(int i=1;i<=n;i++){
         int ans=digit_sum(i);
         if(ans>=a && ans<=b){
            sum+=i;
         }
    }
    cout << sum <<'\n';
    return 0;
}