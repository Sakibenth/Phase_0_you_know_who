#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int l_2=max(l1,l2);
    int r_1=min(r1,r2);
    if(l_2>r_1){
        cout << -1 << '\n';
    }
    else{
        cout<<l_2<<" "<<r_1<<'\n';
    }
    return 0;
}
