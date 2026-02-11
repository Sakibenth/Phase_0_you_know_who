#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    int lenA=strlen(a);
    int lenB=strlen(b);
    char c[lenA+lenB+1];
    for(int i=0;i<lenA;i++){
        c[i]=a[i];
    }
    for(int i=0;i<lenB;i++){
        c[lenA+i]=b[i];
    }
    c[lenA+lenB]='\0';
    cout << c <<'\n';
    return 0;

}
