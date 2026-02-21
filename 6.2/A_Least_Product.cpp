#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int zeroes=0;
        int neg=0;
        int pos=0;
        for(int j=0;j<n;j++){
            int elem; cin >> elem;
            if(elem>0) pos++;
            else if (elem<0) neg++;
            else zeroes++;
        }
        if(zeroes>0){
            cout << 0 <<"\n";
        }
        else {
            if(neg>0){
                if( neg%2!=0){
                    cout << 0 <<'\n';
                }
                else{
                    cout << 1 <<'\n';
                    cout << 1 <<" "<<0 <<'\n';
                }
            }
            else{
                cout << 1 <<'\n';
                cout<< 1 <<" "<<0 <<'\n';
            }
        }
    }
    return 0;
}