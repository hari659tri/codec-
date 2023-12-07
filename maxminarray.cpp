#include<bits/stdc++.h>
using namespace std;
  
     
      int getmin(int arr[],int n){


        int mini= INT_MAX;

        for(int i=0;i<n;i++){

      mini= min(mini,arr[i]);



        }
        return mini;
      }
     

  int  getmax(int arr[],int n){

    int maxi= INT_MIN;

         for(int i=0;i<n;i++){
     
              maxi=max(maxi,arr[i]);
                    // if(arr[i]>max){
                    //     max=arr[i];

                    // }

 

         }

        

        return maxi;



  }

 int main(){
    
    
    int arr[]={12,23,43,42,2,3,4,0,3,45,3,12,-1,-2};

    int size=sizeof(arr)/sizeof(arr[0]);

  int max=  getmax(arr,size);
   int min= getmin(arr,size);

    cout<<"Max element of the array is "<<" "<<max<<"\n";
    cout<<"Min element of the array is "<<" "<<min<<"\n";

    

    //  when you pass array in function then array base addres pass not actual array passed
    


 }