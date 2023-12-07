#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void say(int n,string s[]){
     
    
     if(n==0)
      return ;

    int d = n%10;
     n=n/10;

     say(n,s);
         cout<<s[d]<<" ";
 }  

int main(){


  string s[10]={ "zero","one","two" "three","four","five","six","seven","eight","nine"};
      
      int n;
      cin>>n;
     say(n,s);

   

   
}