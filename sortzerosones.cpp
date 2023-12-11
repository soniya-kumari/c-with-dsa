//sort array zeros and ones using two pointer
 #include<iostream>
 #include<vector>
using namespace std;
//  void sort(vector<int>&v){
//     int noz=0;
//    int noo=0;
//  int n=v.size();
//  for(int i=0;i<=n-1;i++){
//    if(v[i]==0)      noz++;
//     else
//         noo++;
//      }
//      for(int i=0;i<=n-1;i++){
//         if(i<noz)v[i]=0;
//          else v[i]=1;
        
//  }

    
//}
 
  void sortm2(vector<int> &v){
     int i=0;
   int n= v.size();
  int j=n-1;
     while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--; 
          if(i>=j)  break;
          if(v[i]==1 && v[j]==0){
                 v[i]=0;
        v[j]=1;
        
          }
           i++;
         j--;
         }
 }
// void sortm2(vector<int>& v){
//     int i = 0;
//     int n = v.size();
//      int j = n-1;

//     while(i < j){
//         if(v[i] == 0) i++;
//         if(v[j] == 1) j--;     
//            if(i >= j)  break;
//         if(v[i] == 1 && v[j] == 0) {
//             v[i] = 0;
//             v[j] = 1;
//         }
//         i++;
//         j--;
//     }
// }
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
    sortm2(v);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";



     
       
 }
 return 0;
 }
