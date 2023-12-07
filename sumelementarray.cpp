#include<bits/stdc++.h>

using namespace std;

int sumarr(int arr[],int n){

     int i,s=0;

     for ( i = 0; i < n; i++)
     {
        s+=arr[i];

     }
     

   return s;


}

int main(){
    
    int ARRAY[]={1,2,3,4,5};

    int size=sizeof(ARRAY)/sizeof(ARRAY[0]);

   int res= sumarr(ARRAY,size);

    cout<<res<<"is the sum of the array";


    
}