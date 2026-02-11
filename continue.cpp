#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int last_digit=n%10;
    bool three_multiple;
    if(n%3==0){
        three_multiple=true;
    }
    else{
        three_multiple=false;
    }
    if(last_digit==9 && three_multiple){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}