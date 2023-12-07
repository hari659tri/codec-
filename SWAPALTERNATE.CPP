#include<iostream>
using namespace std;


int sfun1(int arr[],int n){

    int i;

    for(i=0;i<n;i+=2){

        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
    
    void printfun(int arr[],int n){

        for(int i=0;i<n;i++){
            cout<<arr[i]<<"\n";
        }
    }


    int main(){
    
    int arr[]={12,33,21,54,32,89,30};
    

    int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){
         cout<<arr[i]<<"\n";
     }
    sfun1(arr,size);
    printfun(arr,size);

    return 0;


    }