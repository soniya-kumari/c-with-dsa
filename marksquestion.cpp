#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numner of students"<<endl;
    cin>>n;

    int marks[n];
    cout<<"enter the marks :";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];

    }
    for(int i=0;i<=n-1;i++)
    if(marks[i]<35){
        cout<<i<<" ";
    }
}

