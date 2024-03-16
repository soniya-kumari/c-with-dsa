int func(int mid,int n,int m){
     long long ans=1;
     for(int i=1;i<=n;i++){
         ans =ans*mid;
         if(ans>m) return 2;

     }
     if(ans==m) return 1;
     return 0;
 }

int NthRoot(int n, int m) {
    int lo=1;
    int hi=m;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int midN=func(mid,n,m);
        if(midN==1){
            return mid;
        }
        else if(midN==0) lo=mid+1;
        else hi=mid-1;
    }
 return -1;
}