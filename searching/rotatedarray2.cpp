#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,3,3,3,3};
    int n=7;
    int lo=0;
    int hi=n-1;
    int k=1;
    while(lo<=hi){
        int mid= lo +(hi-lo)/2;
         if(arr[mid]==k)
          return true;
        if(arr[lo==arr[mid]&&arr[mid]==arr[hi]]){
            lo++;
            hi--;
            continue;
        }
        
        if(arr[lo]<=arr[mid]){
            if(arr[lo]<=k && k<=arr[mid]){
            hi=mid-1;
            }
            else{
                lo=mid+1;
            }

        }
        else{
            if(arr[mid]<=k && k<=arr[hi]) {
            lo=mid+1;}
            else{
                hi=mid-1;
            }
        }
       
    }
    return false;
    
}