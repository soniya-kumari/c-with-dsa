#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     int x;
     cout<<"enter the number that you want search"<<endl;
     cin>>x;
     bool flag=false;
     for(int i=0;i<=n-1;i++)
     {
        if(arr[i]==x) flag= true;}
           if(flag==true) cout<<"element found";
        else
            cout<<"element is not present";
        

     }





