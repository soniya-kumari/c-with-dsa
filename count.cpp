#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x)
            count++;
        
    }
    cout<<count;
}