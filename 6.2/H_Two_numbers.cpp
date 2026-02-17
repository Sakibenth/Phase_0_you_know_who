#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    int fl=floor((double)a/b);
    int cl=ceil((double)a/b);
    int rnd=round((double)a/b);
    cout << "floor" << " " << a<<" "<<"/"<<" "<<b<<" "<<" "<<"="<<" "<<fl << "\n";
    cout << "ceil" << " " << a<<" "<<"/"<<" "<<b<<" "<<" "<<"="<<" "<<cl << "\n";
    cout << "round" << " " << a<<" "<<"/"<<" "<<b<<" "<<" "<<"="<<" "<<rnd << "\n";
    return 0;
}