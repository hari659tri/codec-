#include<bits/stdc++.h>

using namespace std;


int swapfun(int arr[],int n){
    
   int size=0;
   int end=n-1;

   while (size<=end)
   {
     swap(arr[size],arr[end]);
     size++;
     end--;

   }
   
 return 0;


}
 void printarr (int arr[],int size){

    for(int i=0; i<size;i++){
     
     cout<<arr[i]<<" "<<"\n";


    }
 }

int main(){

   int arr[]={1,2,3,4,5,6,7};

   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<"Array before swaping"<<"\n";
   printarr(arr,size);

      swapfun(arr,size);

          cout<<"Array after swaping"<<"\n";
      printarr(arr,size);



}