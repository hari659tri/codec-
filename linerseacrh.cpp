#include<bits/stdc++.h>

using namespace std;
// this code efficently work for a non  repeating elements  

int linearsearch(int arr[],int n,int key){

      for(int i=0;i<n;i++){

         if(arr[i]==key)
         return i;



      }

  return -1;
}

int main(){
    
    int arr[]={12,23,45,54,56,90,49,34,9,23};

    int size=sizeof(arr)/sizeof(arr[0]);

     int key;
     cout<<"Entre key element that is found :"<<endl;
     cin>>key;

     int result=linearsearch(arr,size,key);
    
     if(result!=-1){

        cout<<key<<" found at index"<<result<<endl;

     }
     else{
        cout<<key<<" Not found "<<result<<endl;
     }



    

} 