#include<iostream>

using namespace std;

      bool isplandrome(string str,int s,int e){

        
     while(s<e){

    if(str[s]==str[e]){

        s++;
        e--;
     
    }
     
      else
      {

        return false;
      }


      }
      return true;
      }
int main(){
  
   string str="abbad";

   int s=0;
   int e=str.size()-1;

   

  int ans= isplandrome(str,s,e);
  
      if(ans){
        
        cout<<"it is a plandrome";

      }
     else{

        cout<<"It is not a plandrome";
     }
      

     return 0;
   }

    
