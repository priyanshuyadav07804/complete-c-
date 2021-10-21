#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<" ***********decimal to octal and hexal convertor********** "<<endl;
    int n,x;
    cout<<"enter decimal number : ";
    cin>>n;
    cout<<"Press 8 for Octal & Press 16 for Hexal & 10 for decimal "<<endl;
    cin>>x;
    switch(x)
    {
        case 8: cout<<"Decimal value "<<n<<" in Octal -> "<<setbase(8)<<n; // replace 'setbase(8) --> oct'
                break;
        case 16: cout<<"Decimal value "<<n<<" in Hexal -> "<<setbase(16)<<n; // replace 'stbase(16) --> hex'
                break; 
    }
    return 0; 
}