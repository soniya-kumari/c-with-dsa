#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cout<<"enter the length of string";
cin>>n;
cout<<endl;

char str[n];
cout<<"enter the string";
cin.ignore();
cin.getline(str,n);



    
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0){
            str[i]='a';
        }
         i++;
             
        
    }

cout<<str;
return 0;
    }
    

