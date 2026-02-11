#include <bits/stdc++.h>
using namespace std;
int main(){
    char name[6]={'h','e','l','l','o','\0'}; //\0 defines the end of the string. To store n characters you have to declare an array of n+1 length.last index is for \0
    char name2[]={'h','e','l','l','o','\0'}; //explicitely mentioning the characters but not mentioning size
    char name3[]={'h','e','l'}; //partially initializing the array. The remaining values will be \0;
    char name4[6]={}; // all values are intialized with \0
    char name5[6]; //stores garbage values
    char name6[6]="hello"; //best way
    char name7[]="hello";
    // char name8[5]="hello"; //6 characters (\0 included) can not be stored in 5 char array
    //printing
    cout << name << endl;
    for(int i=0;name[i]!='\0';i++){
        cout<< name[i];
    }
    cout<< '\n';
    //printing the null character
    // char ch='\0';
    // cout << ch << '\n'; //gives weird values
    //taking input
    // char name8[100];
    // cin >> name; //takes input untill first whitespace character appears;
    // cout << name << '\n';
    // //using cin.getline()
    char name9[100];  //can store upto 99 characters. one space reserved for \0
    cin.getline(name9,100); //reads upto 99 characters or untill a newline(\n or enter) character appears. will read only 99 character as \0 will occupy one space
    cout<< name9 <<'\n';    //prints upto 99 characters because one character is \0
    //using strlen function
    int len=strlen(name9);
    cout<< len << '\n';
}