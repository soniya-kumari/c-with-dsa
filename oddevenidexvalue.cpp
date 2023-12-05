// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
       cin>> arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if(i%2==0)
           arr[i] =10+arr[i];

else 
arr[i]=2*arr[i];
        
    
    cout<<arr[i]<<" ";
    }
    return 0;
}