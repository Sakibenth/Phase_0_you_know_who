#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
    for(int i=0;i<n;i++){
        int elem;
        cin >> elem;
        int elem_1=abs(elem);
        if(elem_1%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(elem>0){
            pos++;
        }
        else if(elem <0){
            neg++;
        }
    }
    cout << "Even: "<< even <<'\n';
    cout <<"Odd: " <<odd <<'\n';
    cout <<"Positive: " <<pos <<'\n';
    cout<<"Negative: "  <<neg <<'\n';
    return 0;
}