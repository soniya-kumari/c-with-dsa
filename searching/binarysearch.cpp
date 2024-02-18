#include<iostream>
using namespace std;
int main(){
   
        int arr[]={1,2,4,5,9,15,18,21,24};
        int n =9;
         int lo=0;
        int hi = n-1;
        int x =3;
        
        bool flag=false;
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                cout<<arr[mid];
                break;
            }
            else if(arr[mid]<x) lo=mid+1;
            else hi=mid-1;

        }
       if (flag==true)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
        
}

    
