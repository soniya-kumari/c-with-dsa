#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows";
    cin>>n;
    int m;
    cout<<"enter the no.of columns";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    cout<<max;
}