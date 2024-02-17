#include<iostream>
using namespace std;
int main(){ 
    int arr[]={14,5,6,8,9,3,2,1,10};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i=1;i<=n/2+1;i++){
        for( int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
