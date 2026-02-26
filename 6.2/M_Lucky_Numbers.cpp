#include <bits/stdc++.h>
using namespace std;
bool lucky(int n){
    while(n!=0){
        int last_digit=n%10;
        if(last_digit==4 || last_digit==7){
            n/=10;
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a ,b;
    cin >> a >> b;
    bool flag=false;
    for(int i=a;i<=b;i++){
        if(lucky(i)){
            cout << i <<" ";
            flag=true;
        }
    }
    if(!flag){
        cout << -1 <<'\n';
    }
  return 0;
}