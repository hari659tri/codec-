#include<iostream>

using namespace std;
    



int binarysearch(int arr[],int s,int e,int k){
   
  

 // base case  element not found
  if(s>e)
    return -1;
 int mid=s+(e-s)/2;
 cout<<arr[mid]<<endl;
   // base case  element found
  if(arr[mid]==k)
  return mid;
   else if(arr[mid]<k)
   
    return binarysearch(arr,mid+1,e,k);

    else
 

     return binarysearch(arr,s,mid-1,k);












}

int main(){

int arr[]={1,2,3,4,5,6,7};
 
 
  int size=sizeof(arr)/sizeof(arr[0]);
   
   int key=7;
   int s=0;
   int e=size-1;
  int ans=binarysearch(arr,s,e,key);

  cout<<ans;
 
 
 
 
    return 0;
}