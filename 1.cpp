#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"input value";
   cin>>n;
   int *ptr;
   ptr = new int[n];
   for(int i=0; i<n;i++){
    ptr[i]=i;
   }
   for(int j=0; j<n; j++){
    cout<<ptr[j];
   }
   return 0;
}