#include<iostream>
using namespace std ;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the number of cols";
    cin>>n;

    //input
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for( int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<=m-1;i++){
        for( int j=0;j<=n-1;j++){
            if((i==j)or (i+j==n-1)){
                cout<<arr[i][j]<<" ";
            }
            else{
            cout<<" ";}
        }
        cout<<endl;
    }
    
}