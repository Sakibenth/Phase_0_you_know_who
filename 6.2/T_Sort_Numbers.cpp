#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b,c;
    cin >> a >> b >> c;
    int arr[3]={a,b,c};
    int arr1[3]={a,b,c};
    sort(arr,arr+3);
    cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << "\n";
    cout <<'\n'<<arr1[0] << "\n" << arr1[1] << "\n" << arr1[2];
     return 0;
}