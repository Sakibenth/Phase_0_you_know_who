#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            if(j==i){
                sum+=j;
                cout << j <<"=";
            }
            else{
                sum+=j;
                cout << j <<"+";
            }
        }
        cout << sum <<'\n';
    }
}