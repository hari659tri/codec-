#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define n 10


  int main(){

     
  int arr[]={1,2,3,4,5,6};
  int size=sizeof(arr)/sizeof(arr[0]);

    int s=0;
     int e=size-1;

    //   while(s<e){
    //     swap(arr[s],arr[e]);

    //     s++;
    //     e--;     

    //   }

    // for(int i=0;i<size;i++){

    //  cout<<arr[i]<<" ";

    // }
  
   int ans= INT_MIN;

     for(int i=0;i<size;i++){
          
          if(arr[i]>ans){
            ans=arr[i];
          }
     }
      
       for()
  }