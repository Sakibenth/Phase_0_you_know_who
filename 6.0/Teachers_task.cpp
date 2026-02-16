#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout << sum(10) <<'\n';
    cout << sum(100) << '\n';
    cout << sum(1000) <<'\n';
    return 0;
}