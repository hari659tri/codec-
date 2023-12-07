#include<iostream>

using namespace std;

 int main(){
//   int n;
   // 2d array cration   of square size
 // cin>>n;

//     int**arr=   new int*[n];

//     for(int i=0;i<n;i++){

//    arr[i]= new int[n];
     



//     }
   
   
//     for(int i=0;i<n;i++){

//       for(int j=0;j<n;j++){

//       cin>>arr[i][j];



//       }
     


      

//     }

//     for(int i=0;i<n;i++){

//       for(int j=0;j<n;j++){

//        cout<<arr[i][j]<<"";


//       }   
//        cout<<endl;
     


      
      
//     }
  

  // 2d array creation of non square type  matrix 


  int row;
  int col;

  cin>>row>>col;

  int **arr= new int*[row];

  for(int i=0;i<row;i++){
  
   arr[i]=new int[col];

  }
  
     for(int i=0;i<row;i++){
     
      for(int j=0;j<col;j++){
       
        cin>>arr[i][j];

         
      }

          
     }

      for(int i=0;i<row;i++){
     
      for(int j=0;j<col;j++){
       
        cout<<arr[i][j]<<" ";

         
      }
       cout<<endl;
          
     }
      
     //  how to release memory 2d 

   // delting array of part A
      for(int i=0;i<row;i++){

          delete []arr[i];


      } 

      // deleting array of part B

      delete[]arr;
   


    return 0;
 }