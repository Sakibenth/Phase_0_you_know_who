#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin >> a;
    string b;
    cin >>b;
    string c;
    cin >> c;
    // cout << a<< '\n';
    // cout << b << '\n';
    // cout << c <<'\n';
    int first_number=0;
    int k=0;
    for(int i=a.size()-1;i>=0;i--){
        if(isdigit(a[i])){
            first_number+=(int) (a[i]-'0')*pow(10,k);
            k++;
        }
        else{
            if(a[i]=='-'){
                first_number*=-1;
            }
        }
    }
    int second_number=0;
    k=0;
    for(int i=c.size()-1;i>=0;i--){
        if(isdigit(c[i])){
            second_number+=(int) (c[i]-'0')*pow(10,k);
            k++;
        }
        else{
            if(c[i]=='-'){
                second_number*=-1;
            }
        }
    }
    // cout << first_number <<'\n';
    // cout << second_number <<'\n';

    if(b[0]=='>'){
        if(first_number>second_number){
            cout << "Right" <<'\n';
        }
        else{
            cout << "Wrong" <<'\n';
        }
    }
    else if(b[0]=='<'){
        if(first_number<second_number){
            cout << "Right" <<'\n';
        }
        else{
            cout << "Wrong"<<'\n';
        }
    }
    else{
        if(first_number==second_number){
            cout << "Right" <<'\n';
        }
        else{
            cout << "Wrong"<<'\n';
        }
    }
    return 0;
}