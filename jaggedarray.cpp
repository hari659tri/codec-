#include<iostream>

using namespace std;

 int main(){
 // jageed array it is array of array in which have a different number of columns 
   int row;
   int col;
  
   // entre a number of row 
   cin>>row;
  // entre a number of coloumn 
    cin>>col;
   
    int **arr= new int*[row];
    int *size =  new int[col];
   //  creating number of distinct column 
    for(int i=0;i<col;i++){
    
      cin>>size[i];



    } 


    for(int i=0;i<row;i++){
  
   for(int j=0;j<size[i];j++){

       arr[i]=new int[size[i]];




     
   }




    }



      for(int i=0;i<row;i++){
  
   for(int j=0;j<size[i];j++){

       
       cin>>arr[i][j];
   }

    }

   
   
      for(int i=0;i<row;i++){
  
   for(int j=0;j<size[i];j++){

       
       cout<<arr[i][j];

   
    }

  
   
   
   



      }


  return 0;





 }