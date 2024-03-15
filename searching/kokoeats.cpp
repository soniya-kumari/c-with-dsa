#include<bits/stdc++.h>
int findmax(vector<int> &v){
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}
long long calculateTotalHours(vector<int> &v, int hourly){
    long long totalH=0;
    int n=v.size();
    for(int i=0;i<n;i++){
         totalH += ceil((double)v[i] / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
   int lo=1;
   int hi=findmax( v);
   while(lo <= hi){
   int mid=lo+(hi-lo)/2;
   long long  totalH=calculateTotalHours(v,mid);
   if( totalH<=h){
       hi=mid-1;

   } else {
       lo = mid + 1;
   }
   }
   return lo;
}