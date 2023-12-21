#include<iostream>
#include<algorithm> 8
#include<string>
using namespace std;
int main(){
string str;
getline(cin,str);
int n=str.length();

cout<<str.substr(n/2);

}