#include<bits/stdc++.h>

using namespace std;


 int swapr(int arr[],int n ){

    for(int i=0;i<n;i+2){
        if(i+1<n)
   swap(arr[i],arr[i+1]);

    }
 }
  void fun (int arr[],int n){
    for(int i=0;i<n;i++){

        cout<<arr[i]<<"\n";

    }

  }


int main(){
  
  int arr []={1,2,2,4,5,6};

  int size=sizeof(arr)/sizeof(arr[0]);

  int res=swapr(arr,size);
    fun(arr,size);





}