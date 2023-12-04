#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"yes it is a three digit no."<<endl;

    }
    else{
        cout<<"number is not a three digit number";
    }
}