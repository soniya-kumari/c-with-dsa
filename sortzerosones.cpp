#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int noz=0;
    int noo=0;
    int n=v.size();
    for(int i=0;i<=n-1;i++){
        if(v[i]==0)
        noz++;
        else
        noo++;
    }
    for(int i=0;i<=n-1;i++){
        if(i<noz)v[i]=0;
        else v[i]=1;
        
    }
    
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";


    }
}