#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,1,7,8,9};
    int n=7;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for( int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        flag=false;
        }
        }
        if(flag==true){
        break; 
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    
}