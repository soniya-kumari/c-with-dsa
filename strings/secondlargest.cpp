#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="2947578";
   
    char max1='!' , max2='!';
    
    for(int i=0;i<str.size();i++){
        if(max1<str[i]){
             max2=max1;
        max1=str[i];
        }
        else if (max2<str[i] && str[i]!=max1){
        
        max2=str[i];}
        }
    
        if(max2=='!')cout<<"no second largest";
  else  cout<<max2; 
  
    
}