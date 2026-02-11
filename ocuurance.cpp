#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt[11]={};//assuming the elements are in the range 0-10
    for(int i=0;i<n;i++){
        cnt[arr[i]]++;
    }
    for(int i=1;i<=10;i++){
        cout<<"Element "<<i<<" occurs "<<cnt[i]<<" times\n";
    }
}