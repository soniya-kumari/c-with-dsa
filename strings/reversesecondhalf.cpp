//reverse the second half of the string by taking even number of string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string str;
getline(cin,str);
int n=str.length();
reverse(str.begin()+n/2,str.end());
cout<<str;
}