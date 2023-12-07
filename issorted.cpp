#include<iostream>

 using namespace std;

 bool issorted(int arr[],int n){
  // base case
  if(n==0||n==1){

    return true;
  }
 // recursive case
   if(arr[0]>arr[1])
    return false;

   else{
   
   int ans= issorted(arr+1,n-1);
     
     return ans;
   }
    
 }

 int main(){

    int arr[]={12,13,14,15,16,16,17,18,18};

    int size=sizeof(arr)/sizeof(arr[0]);

     int ans=  issorted(arr,size);

     if(ans){
        cout<<"sorted";

     }
     else{
        cout<<"Not sorted";
     }
     
    return 0;
 }