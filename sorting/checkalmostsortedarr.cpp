#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,2,7,9,8};
    
    int brr[5]; 
    int n = 5;
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
for(int i=0;i<n-1;i++){
    bool flag=true;
    for( int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
        }
    }




if (flag==true);
break;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
bool flag=true;
for(int i=0;i<n;i++){
    if(i==0){
        if(brr[i]!=arr[i] && brr[i]!=arr[i+1])
        flag=false;
        break;
    }
    else if(i==n-1){
        if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
            flag=false;
            break;

        }
        
    }
    else{
        if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=i+1) 
        {
        flag=false;
        break;
    }
    }
    
}
cout<<flag;

}