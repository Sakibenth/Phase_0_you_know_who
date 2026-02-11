#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int number[5]={1,2,3,4,5}; //explicit size and initialization
    int a[]={10,20,30,40,50};  //implicit size and explicit initialization
    int b[5]={10,20};     //partial initialization, rest are zero
    int c[5]={};        //all elements are zero;
    int d[5];        //uninitialized local array, contains garbage values
    // taking input and printing output
    int n;
    cin>>n;
    int arr[n]; //variable length array (VLA), allowed in C++14 as an extension
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    int size=sizeof(number);  //size in bytes
    cout<<"Size of number array in bytes: "<<size<<'\n';
    int actual_size=sizeof(number)/sizeof(number[0]); //number of elements
    cout<<"Number of elements in number array: "<<actual_size<<'\n';
    return 0;

}