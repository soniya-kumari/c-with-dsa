#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows:";
    cin>>m;
    int n;
    cout<<"enter the number of cols :";
    cin>>n;
     int arr[m][n];
     //input
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
     }
     cout<<endl;

     for( int i=m-1;i>=0;i-- ){
        if(i%2==0){
            for(int j=0;j<=n-1;j++){
            cout<<arr[i][j];
            }
        }
     
     
     else{
        for(int j=n-1;j>=0-1;j--){
            cout<<arr[i][j];
        }
     }
     
}
}