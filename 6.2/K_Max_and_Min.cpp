#include <bits/stdc++.h>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b,c;
    cin >> a >> b >> c;
    cout <<min(a,min(b,c))<<" "<<max(a,max(b,c))<<'\n';
    return 0;
}