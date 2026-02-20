#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        int elem; cin >> elem;
        if(elem>max){
            max=elem;
        }
    }
    cout << max <<'\n';
    return 0;
}