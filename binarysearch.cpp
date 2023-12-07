#include<iostream>

using namespace std;

int binarysearch(int arr[],int n ,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;


    while(s<=e){

        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key){
            s=mid+1;

        }
         
         else{
            e=mid-1;

         }

         mid=s+(e-s)/2;



    }

    return -1;
}


int main(){
   //  even length
   int arr[]= {12,14,56,64,79,100};

    // odd  length

    int brr[]={11,22,33,44,55};
    int size=sizeof(arr)/sizeof(arr[0]);
    int S=sizeof(brr)/sizeof(brr[0]);
    int key,ney; 
    cout<<"Entre key element that you want to find for even length";
    
    cin>>key;
         
     int res=   binarysearch(brr,size,key);

        if(res!=-1){
            cout<< key<<" index is  "<<res;
        }
        else{
            cout<< key<<"index is not found"<<res;
        }
        
        
     
     
     cout<<"Entre key element that you want to find for odd length";
       
     cin>>ney;
      int result =binarysearch(brr,S,ney);
    
     if(result!=-1){
        cout<<ney<<"index is "<<result;

     }
       else{
        cout<<ney<<"index is not found"<<result;
       }

       return 0;


}