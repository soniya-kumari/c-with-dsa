#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    cout<<s+t<<endl;
}