#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int elem;
        cin >> elem;
        long long int factorial=1;
        if(elem!=0){
            for(int j=1;j<=elem;j++){
                factorial*=j;
            }
            cout << factorial <<'\n';
        }
        else{
            cout << 1 << '\n';
        }
    }
    return 0;
}