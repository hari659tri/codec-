#include<iostream>
using namespace std;

    bool sum(int arr[],int n,int k){
    
           
           if(n==0)
            return false;

            if(arr[0]==k){

              return true;
            }
            else{

              int ans=sum(arr+1,n-1,k);
              return ans;
            }

            
        
           
     

   }

 int main(){
  
  int arr[]={3,2,5,1,6};
  int size=sizeof(arr)/sizeof(arr[0]);
    int key=6;

   int ans=sum(arr,size,key);

   if(ans){
    cout<<"Found";
   }
   else{
    cout<<"Not found";
   }



 }