#include<iostream>
using namespace std;
 int main(){
    int m;
    cout<<"enter no. of rows of first matrix";
    cin>>m;
    int n;
    cout<<"enter no. of cols of first matrix";
    cin>>n;
    int p;
    cout<<"enter no. of rows of second matrix";
    cin>>p;
    int q ;
    cout<<"enter no. of rows of second matrix";
    cin>>q;

    if(n==p){
        int arr[m][n];
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                cin>>arr[i][j];
            }
        }
        cout<<endl;
        int b[p][q];
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=q-1;j++){
                cin>>arr[i][j];
            }
        }
cout<<endl;
    
int res[m][p];
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=p-1;j++){
  res[i][j]=0;
for( int k=0;k<=p;k++){
    res[i][j] = res[i][j] +   arr[i][k]*arr[k][j];
}
                  
            }
        }
        arr[m][p];
        for(int i=0;i<=m-1;i++){
        for(int j=0;j<=p-1;j++){
            cout<<res[i][j]<<" ";
        }
       cout<<endl;
        }
        
        
    }
else{
    cout<<"multiplication of the matrix is not possible";
}

 }