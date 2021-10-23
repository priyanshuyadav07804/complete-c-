// program to take alphabet between A to M and display next 4 alphabet. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch,ch1,ch2,ch3,ch4,ch5;
    cout<<"enter value between a to j : ";
    cin>>ch;
    ch1=ch+1;   // char can be used, as like int operation
    ch2=ch+2;
    ch3=ch+3;
    ch4=ch+4;
    cout<<"next 4 alphabets are : "<<ch1<<ends<<ch2<<ends<<ch3<<ends<<ch4;
    return 0;
}