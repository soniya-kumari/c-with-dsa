#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
   
    for(int i=0;i<=n-1;i++){
        if(arr[i-1]>arr[i]){
            cout<<"no";
           return 0;
            }}
    
  
 
    cout<<"yes";
    
 
}

