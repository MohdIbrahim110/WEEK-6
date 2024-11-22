#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"enter the string: ";
    cin>>str;
    char *ptr = str;

     cout <<"value of string is: ";
   
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    return 0;
}
