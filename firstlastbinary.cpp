// First and Last Position of an Element In Sorted Array


// array is sorted you need to find first occurene==left most occurence 
// last occurence is == right most index 
// may be duplicte element present

int firstoccurence(int arr[],int n,int k){
  


int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;

  while(s<=e){

   if(arr[mid]==k){
       
       ans=mid;
       e=mid-1;// due to element may be present at the left part of array so we need left most occurence 
       // thats why we do it here a mid-1;


   }
   else if(arr[mid]<k)
       
       s=mid+1;

    else if(arr[mid]>k){
        
          e=mid-1;
         
          }


      mid=s+(e-s)/2;

  }


   
   
   return ans;


}



int lastoccurence(int arr[],int n,int k){
  


int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;

  while(s<=e){

   if(arr[mid]==k){
       
       ans=mid;
       s=mid+1;// due to element may be present at the left part of array so we need left most occurence 
       // thats why we do it here a mid-1;


   }
   else if(arr[mid]<k)
       
       s=mid+1;

    else if(arr[mid]>k){
        
          e=mid-1;
         
          }


      mid=s+(e-s)/2;

  }


   
   
   return ans;


}



#include<iostream>

using namespace std;

int main(){
 
 int arr[]={0 ,0 ,1 ,1 ,2 ,2 ,2, 2};
 int size=sizeof(arr)/sizeof(arr[0]);

 int res=firstoccurence(arr,size,2);



 int res1=lastoccurence(arr,size,2);
 cout<<res<<"\n"<<res1;

}