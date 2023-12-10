//Write a C++ program to find the second smallest elements in a given array of integers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
//input
    int arr[n];
    for(int i=0;i<=n-1;i++){
            cin>>arr[i];
    }
    int min=arr[0];
    int min2=arr[0];
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    
    for(int i=0;i<=n-1;i++){
        if(min2>arr[i] && arr[i]!=min)
            min2=arr[i];
            
    }

cout<<min<<" "<<min2<<endl;
        
    
    }