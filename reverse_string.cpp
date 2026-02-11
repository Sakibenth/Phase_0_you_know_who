#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cin >> str;
    int n=strlen(str);
    //reverse string
    char reversed[n+1];
    int j=0;
    for(int i=n-1;i>=0;i--){
        reversed[j]=str[i];
        j++;
    }
    reversed[j]='\0';
    //storing the reversed string onto the original array
    for(int i=0;i<n;i++){
        str[i]=reversed[i];
    }
    cout<< str <<'\n';
    return 0;
}