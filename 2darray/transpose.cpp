#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int m;
    cout<<"enter the number of columns:";
    cin>>m;
    //input
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j];
    

        }
        cout<<endl;
        }
        //store transpose
        int tr[m][n];
            for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            tr[i][j]=arr[j][i];
            

        }
        }
        //printing transponse
            for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<tr[i][j]<<" ";
            }
            cout<<endl;
            } 

}