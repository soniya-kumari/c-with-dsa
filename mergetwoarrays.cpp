#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1, vector<int>& v2){
    int n=v1.size();
    int m=v2.size();
    vector<int>v3(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(v1[i]<v2[j]){
        v3[k]=v1[i];
        i++;
        }
        else{
        v3[k]=v2[j];
        j++;
        
    }
    k++;

    }
    if(i==n){
    while(j<=m-1){
        v3[k]=v2[j];
        k++;
        j++;

    }
    }
    if(j==m){
        while(i<=n-1){
            v3[k]=v1[i];
            k++;
            j++;
        }
    }
    return v3;
}
int main(){
    vector<int>v1={1,3,5,8};
    vector<int>v2={2,4,6,7,9};
    vector<int> v3 = merge(v1,v2);
   

for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}
cout<<endl;
return 0;
}