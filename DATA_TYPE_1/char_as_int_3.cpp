#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=65,n;
    cout<<"no. of pattern : ";
    cin>>n;
    for(int x=0;x<n;x++){
        for(int y=0;y<x+1;y++){
            cout<<char(num)<<ends;
        }
        num+=1;
        cout<<endl;    
    }
    return 0;
}