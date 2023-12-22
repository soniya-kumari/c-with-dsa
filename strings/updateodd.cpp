#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int  main(){
string s;
getline(cin,s);
int n=s.length();
int i=0;
while(s[i]!='\0'){
    if(i%2!=0)
    s[i]='#';
    i++;
}

cout<<s;
}