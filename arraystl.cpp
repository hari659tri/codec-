#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 

   array<int,5>a={1,2,3,4,5};
   
   cout<<"size is-> "<<a.size()<<endl;
    cout<<a.at(2)<<endl;
     cout<<a.empty()<<endl;
     cout<<a.front()<<endl;
      cout<<a.back()<<endl;
     a.pop_back();
    return 0;
}