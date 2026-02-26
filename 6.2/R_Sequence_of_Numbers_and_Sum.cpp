#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int m,n; cin >> m >> n;
        if(m<=0 || n<=0){
            break;
        }
        int sum=0;
        if(m<=n){
            for(int i=m;i<=n;i++){
                cout<<i<<" ";
                sum+=i;
            }
        cout<<"sum ="<<sum<<'\n';
        }
        else{
            for(int i=n;i<=m;i++){
                cout<<i<<" ";
                sum+=i;
            }
        cout<<"sum ="<<sum<<'\n';
        }
    }
    return 0;
}