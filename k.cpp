#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

  int lastocc(int arr[],int n,int x){

    


      for(int i=n-1;i>=0;i--){
          if(arr[i]==x){
            
            return i;

          }
         
      }
      return -1;
  }

int main() {
    //Write your code here
     
     int n;
     cin>>n;
     int arr[n];

     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     
     int x;
     cin>>x;
     int res= lastocc(arr,n,x);
     cout<<res;


    return 0;
}