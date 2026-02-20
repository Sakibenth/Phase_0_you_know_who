#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int a,b,c,d;
    cin >> a >> b>> c >>d;
    if((b*log10(a))>(d*log10(c))){
        cout << "YES" <<'\n';
    }
    else{
        cout <<"NO" <<'\n';
    }
    return 0;
}