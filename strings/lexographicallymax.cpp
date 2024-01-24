#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
string str;
getline(cin,str);
string maxword="";
string word="";
for(int i=0;i<str.size();i++){
    if(str[i]==' '){
        maxword=max(maxword,word);
        word="";
    }
    else word+=str[i];
}
 maxword=max(maxword,word);
 cout<<maxword<<endl;
}