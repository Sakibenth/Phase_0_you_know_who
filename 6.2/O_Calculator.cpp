#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    char op;
    int op_index=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            op = s[i];
            op_index = i;
            break;
        }
    }
        int first_num=0;
        int k=0;
        for(int i=op_index-1;i>=0;i--){
            first_num+=(int)(s[i]-'0')*pow(10,k);
            k++;
        }
        int second_num=0;
        k=0;
        for(int i=s.size()-1;i>=op_index+1;i--){
            second_num+=(int)(s[i]-'0')*pow(10,k);
            k++;
        }
        if(op=='+'){
            cout << first_num+second_num << "\n";
        }
        else if(op=='-'){
            cout << first_num-second_num << "\n";
        }
        else if(op=='*'){
            cout << first_num*second_num << "\n";
        }
        else if(op=='/'){
            cout << first_num/second_num << "\n";
        }
        return 0;
}