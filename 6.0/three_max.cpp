#include <bits/stdc++.h>
using namespace std;
int max2(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    int max=max2(max2(a,b),c);
    cout << max << '\n';
}