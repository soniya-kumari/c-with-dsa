#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++)
    cin>>arr[i];
    //output or sum
    int sum=0;
    for(int i=0;i<=n-1;i++){
sum=sum+arr[i];    }
cout<<sum;

}