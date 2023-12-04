#include<iostream>
using namespace std;
int main(){
    cout<<"enter the first number";
    int a;
    cin>>a;
    cout<<"enter the second number";
    int b;
    cin>>b;
    cout<<"enter the third number";
    int c;
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater"<<endl;
    }
    if(b>a && b>c){
        cout<<"b is greater"<<endl;
    }
    if(c>a && c>b){
        cout<<"c is greater"<<endl;
    }
}