#include<iostream>
using namespace std;
int main(){
    int arr[]={7,8,9,1,2,3,4,5,6};
    int n=9;
    int lo=0;
    int hi=n;
    int k=1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==k) cout<<mid;
        if(arr[lo]<=arr[mid]){
            if(arr[lo]<=k && k<= arr[mid]){
            hi=mid-1;}
            else{
            lo=mid+1;}
        }
        else 
        if(arr[mid]<=k && k <=arr[hi]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }

return -1;
}