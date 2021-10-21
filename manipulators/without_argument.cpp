/*modifies the I/O stream using insertion (<<) and extraction (>>) operator:-
without argument:-
endl; :- (OSTREAM) used to inter a new linr
ws; :-define in ISTREAM and used to ignore whitespaces in the string sequence untill new next non whitespace character is found
ends; :-(OSTREAM) attach null terminating ('\0') charecter at end of string 
flush; :-(OSTREAM) print output forcefully
with argument:
setw(n):-add n whitespace upto next charecter
setfill(c):-fill 'c' at all whitespaces givem by setw(n)             
setprecision(val):-presice floating value upto 'val'
setbase(n):-convert base*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"enter strings"<<endl;
    cin>>ws>>s1;       //remove whitespaces
    cout<<s1<<endl;
    cout<<"this is manipulators"<<ends;        //attach null terminating ('\0') charecter //remove '<<ends' then run
    cout<<"use to modify I/O stream"<<flush<<endl;   //without flush output is same
    return 0;
}
