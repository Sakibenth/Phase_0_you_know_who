#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    char binary[]="1011001";
    int n=strlen(binary);
    int decimal=0;
    int place_value=1;
    for(int i=n-1;i>=0;i--){
        if(binary[i]=='1'){
             decimal+=place_value;
        }
        place_value*=2;
    }
    cout<< decimal << '\n';
}