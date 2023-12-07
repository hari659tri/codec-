 #include<iostream>
 #include<bits/stdc++.h>
  using namespace std;

  bool isplandrome(string str,int s,int e){
   
     if(s>e){
        return true;

     }

       if(str[s]!=str[e]){
          return false;
       }
       else{
     
      
     
        return isplandrome(str,s++,e--);



       }

  }

  int main(){
  
   string str="abba";
     
   
     bool ans= isplandrome(str,0,str.length()-1);

     if(ans){
        cout<<"It is a plandrome";

     }
     else{
        cout<<"it is not a plandrome";
     }
    return 0;
  }