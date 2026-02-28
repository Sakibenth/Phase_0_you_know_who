#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int lowest=a[0];
    int lowest_at=0;
    for(int i=1;i<n;i++){
        if(a[i]<lowest){
            lowest=a[i];
            lowest_at=i;
        }
    }
    cout << lowest <<" " << lowest_at+1 <<'\n';
    return 0;
}