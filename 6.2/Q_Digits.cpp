#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int n;
        cin >> n;
        if(n!=0){
            while(n!=0){
                cout<< n%10 <<" ";
                n/=10;
            }
            cout<<"\n";
        }
        else{
            cout<< n <<'\n';
        }
    }
    return 0;
}