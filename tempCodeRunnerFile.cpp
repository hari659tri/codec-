#include <iostream>
using namespace std;

  int indexduplicate(int arr[],int n,int x){
      int i;

      for(i=0;i<n;i++) {
          if(arr[i]==x)
          return i;
      }
     
     return -1;

  }

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int x;
    cin>>x;
      
     int res= indexduplicate(arr,n,x);

      
      cout<<res;



    return 0;
}