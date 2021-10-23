// program to convert height in centimeter to height in foot and inch
// 1 inch = 2.54cm
// 1 foot = 12 inch
#include<bits/stdc++.h>
using namespace std;

int main(){
    float cm,inch,foot;
    cout<<"enter your height in centimeters : ";
    cin>>cm;
    inch=2.54*(cm);
    foot=12*(inch);
    cout<<"height in INCH = "<<inch<<ends<<"inch"<<'\n';
    cout<<"height in FOOT = "<<foot<<ends<<"foot";
    return 0;
}