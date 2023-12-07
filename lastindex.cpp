#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
v.push_back(2);
v.push_back(6);
v.push_back(5);
v.push_back(4);
v.push_back(1);
v.push_back(6);
v.push_back(8);
int x=6;
int idx=-1;

for(int i=0;i<=v.size()-1;i++){
    if(v[i]==x)
    idx=i;
    
   
}
cout<<idx;
}