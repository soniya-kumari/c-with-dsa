int floorSqrt(int n)
{
    int lo=1;
    int hi=n;
    
    while(lo<=hi){
      long long mid=lo+(hi-lo)/2;
      long long value=mid*mid;
      if(value<=n){
        lo=mid+1;

      }
      else{
        hi=mid-1;
      }
    }
    return hi;
    }
