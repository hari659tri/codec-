#include<iostream>
#include<bits/stdc++.h>
 #include<vector>
using namespace std;

int main(){
  
   string s="abcde";

   int i=0;
   int e=4;
    
    while(i<e){
   
   swap(s[i],s[e]);

   i++;
   e--;
    }

  
  cout<<s;
   

    return 0;
}