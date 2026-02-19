#include <bits/stdc++.h>
using namespace std;

int number_calculator(string a){
    int k=0;
    int number=0;
    for(int i=a.size()-1;i>=0;i--){
        if(isdigit(a[i])){
            number+=(int) (a[i]-'0')  *pow(10,k);
            k++;
        }
        else{
            if(a[i]=='-'){
                number*=-1;
            }
        }
    }
    return number;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >> a;
    string b;
    cin  >> b;
    string c;
    cin >> c;
    string d;
    cin >> d;
    string e;
    cin >> e;
    int A=number_calculator(a);
    int B=number_calculator(c);
    //  cout << A <<endl;
    //  cout << B <<endl;
    int result=0;
    if(b[0]=='+'){
        result=A+B;
    }
    else if(b[0]=='-'){
        result=A-B;
    }
    else{
        result=A*B;
    }
    int expected=number_calculator(e);

//  cout << result<<endl;

//  cout << expected <<endl;

    if(expected==result){
        cout << "Yes" <<'\n';
    }
    else{
        cout <<result<<'\n';
    }
    return 0;
}