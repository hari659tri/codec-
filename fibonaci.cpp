#include<iostream>

using namespace std;

int fib(int n){

    int a=0,b=1,i,c;
    if(n==0)
    return a;
    for(i=2;i<=n;i++){

        c=a+b;
        a=b;
        b=c;
      

       

    }
    return b;
}

  
  int main(){

     int n;
     cout<<" entre how many number fibonaci series you want ";

      cin>>n;
      cout<<fib(n);
    
  }