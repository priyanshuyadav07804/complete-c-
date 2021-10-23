// program that give ASCII code of alphabets of english language  
#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch='a';
    for(int x=0;x<26;x++){
        int num=ch;
        cout<<"ASCII code of "<<ch<<" = "<<num<<'\n';
        ch++;
    }
    cout<<ch;
    return 0;
}