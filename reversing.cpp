#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // Reversing the array
    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[n-i-1]);
    }
    // Printing the reversed array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<< "\n";
    return 0;
}