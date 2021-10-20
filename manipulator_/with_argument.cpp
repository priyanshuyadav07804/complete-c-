/*setw(n):-used to set width of next i/p & o/p field
setfill(n):-fill 'n' at width given by setw(n) manipulators
setprecision(n):-used to set precision of numbers
setbase(n):-used to set base*/

#include<bits/stdc++.h>
using namespace std;
int main(){
        // ****************************with argument****************
    long double pi=3.141592653589793239;
    int n=110;
    cout<<"no setw : "<<42<<endl;
    cout<<"setw(6) : "<<setw(7)<<42<<endl;
    cout<<"setfill('*') & setw(6) : "<<42<<setfill('*')<<setw(15)<<56<<endl;
    cout<<"setprecision(6) : "<<setprecision(6)<<pi<<endl;
    cout<<"setprecision(10) : "<<setprecision(10)<<pi<<endl;
    cout<<"setbase(16) : "<<setbase(16)<<n<<endl;
    // cout<<10e<<endl;
    // cout<<"setbase(2) : "<<setbase(2)<<5<<endl;
    return 0;
}  
