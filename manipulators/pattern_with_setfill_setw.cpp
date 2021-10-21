#include<bits/stdc++.h>
using namespace std;
int main(){
    // cout<<setfill('*')<<setw(1)<<'*'<<endl;
    // cout<<setfill('*')<<setw(2)<<'*'<<endl;
    // cout<<setfill('*')<<setw(3)<<'*'<<endl;
    // cout<<setfill('*')<<setw(4)<<'*'<<endl;
    // cout<<setfill('*')<<setw(5)<<'*'<<endl;
    // cout<<setfill('*')<<setw(6)<<'*'<<endl;
    // cout<<setfill('*')<<setw(7)<<'*'<<endl;
    // cout<<setfill('*')<<setw(8)<<'*'<<endl;
    // cout<<setfill('*')<<setw(9)<<'*'<<endl;
    int c;
    char p;
    cout<<"enter number of colomn : ";
    cin>>c;
    cout<<"emter symbol of pattern : ";
    cin>>p;
    cout<<"press A for assending order;"<<endl<<"press D for decending order : ";
    char x;
    cin>>x;
    switch(x){
        case 'a' :
                for(int i=1;i<c+1;i++){
                cout<<setfill(p)<<setw(i)<<p<<endl;
                }
                break;
        case 'd' : 
                for(int i=c;i>0;i--){
                cout<<setfill(p)<<setw(i)<<p<<endl;
                }
                break;
    }
    return 0;
}