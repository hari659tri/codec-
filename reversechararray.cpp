#include<iostream>

 using namespace std;

   int revesre(char ch[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
     
     swap(ch[s],ch[e]);

     s++;
     e--;
    
       


    }

   }

 int main(){
  
     char ch[]="abcde";


     revesre(ch,5);

          cout<<ch;
     
    return 0;
 }