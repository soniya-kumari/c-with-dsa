#include<iostream>
using namespace std;
int main(){
    
int n=5;
    int arr[5]={23,34,45,56,67 };
   int max1=arr[0];
   int max2=arr[0];
   int max3=arr[0];
    for(int i=0;i<=n-1;i++){
    
       if (arr[i]>max1){
        max1=arr[i];
       }
    
    }
for(int i=0;i<=n-1;i++){
if(arr[i]>max2 && arr[i]!=max1){
max2=arr[i];

    }}
    for(int i=0;i<=n-1;i++){
if(arr[i]>max3 && arr[i]!=max2 && arr[i]!=max1){
max3=arr[i];}}
    cout<<max1<<","<<max2<<","<<max3;
}





