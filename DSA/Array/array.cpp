#include<bits/stdc++.h>
using namespace std;

int main(){
    // define an array of 120 byte
    int arr[30];   
    //ya to initialise me hi elements dal do ya phir ek ek kr ke dalo

    //initialise ke time hi elements dalna
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};

    // arr[] = {1,2,3,4}; ->error coz we cant initialise elements in array using this
    //ek ek kr ke dalna
    arr[0] = 11;
    arr[1] = 22;

    //Print array's elements using index 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

    //Traversing array
    for(int i = 0;i<(sizeof(arr1)/sizeof(arr1[0]));i++){
        cout<<"Element at index ["<<i<<"] = "<<arr1[i]<<endl;
    }
    //add two string using concatenation operator
    string s1 = "priya";
    string s2 = "nshu";
    string s3 = s1+s2;
    cout<<s3;
    return 0;
}
