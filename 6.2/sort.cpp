#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // for(int i=0;i<n;i++){
    //     int elem=a[i];
    //     int index=i;
    //     for(int j=i+1;j<n;j++){
    //         if(a[j]<elem){
    //             elem=a[j];
    //             index=j;
    //         }
    //     }
    //     swap(a[i],a[index]);
    // }

    // using function
    sort(a+0,a+n); //sort the array from 0th index to n-1 index. upper bound is not inclusive.
    //decreasing order
    sort(a,a+n,greater<int>()); //sort from 0 to n-1 but in decresing order
    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
    return 0;
}