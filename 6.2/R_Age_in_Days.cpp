#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int years=N/365;
    int months=(N%365)/30;
    int days=(N%365)%30;
    cout <<years<<" "<<"years"<<'\n';
    cout <<months<<" "<<"months"<<'\n';
    cout <<days<<" "<<"days"<<'\n';
    return 0;
}