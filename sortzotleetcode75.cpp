//sort zeros ones and twos
#include<iostream>
#include<vector>
using namespace std;
void zot(vector<int>&nums){
    int noz=0;
    int noo=0;
    int no2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) noz++;
        else if(nums[i]==1) noo++;
        else no2++;
    }
    for(int i=0;i<nums.size();i++){
        if(i<noz) nums[i]=0;
        else if(i<(noz+noo)) nums[i]=1;
        else nums[i]=2;
    }
    cout<<endl;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    cout<<endl;
    zot(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";

    }
    cout<<endl;
}