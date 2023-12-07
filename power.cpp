#include<iostream>
using namespace std;

// if a pow b is even then a^b/2*a^b/2
// if  a is odd then a*a^b/2*a^b/2
   
   int power(int a,int b){

      // base case
    if(b==0)
    return 1;
    if(b==1)
    return a;
    // recursive call
       int ans=power(a,b/2);

    if(b%2==0){
     return ans*ans;
    }
    else{

        return a*ans*ans;

    }
   }

 int main(){
  
   int a,b;
   cin>>a>>b;

   int k=  power(a,b);
   cout<<k;
   


    return 0;
 }