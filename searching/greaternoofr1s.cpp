#include<iostream>
using namespace std;
int main(){
     int arr[]={0,0,0,0,1,1};
    int n=6;
    int lo=0;
    int hi=n-1;
    int x=1;
    int count=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
        count++;
         if (mid == 0 || arr[mid - 1] != x)
                count++;
            
            hi = mid - 1;
        }

        
        else if(arr[mid]!=x) lo=mid+1;
        else hi=mid-1;

    }
    cout<<count;
}
