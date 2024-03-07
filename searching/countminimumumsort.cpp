#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
   int lo=0;
	int hi=arr.size()-1;
	int ans=INT_MAX;
    int index=-1;
	while(lo<=hi){
		int mid=lo +(hi-lo)/2;

		if(arr[lo]<=arr[hi]){
                  if (arr[lo] < ans) {
                    
                    index = lo;
                    ans = arr[lo];
                  }
                  break;
                }
                if(arr[lo]<=arr[mid])
                {
                    if(arr[lo]<ans){
                        index=lo;
                        ans=arr[lo];
                    }
                    lo=mid+1;
                }
		else{
			hi=mid-1;
            if(arr[mid]<ans){
                        index=mid;
                        ans=arr[mid];
                    }
			
		}
	}
	return index;
}
