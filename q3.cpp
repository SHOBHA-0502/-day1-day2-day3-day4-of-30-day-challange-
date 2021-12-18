#include <bits/stdc++.h>

using namespace std;

int main(){
     int arr1[3];
     int arr2[3];
     int count , temp ;
     count =0 ;
     temp =0 ;
     for(int i=0 ; i<3 ; i++){
         cin>>arr1[i];
         
     }
      for(int i=0 ; i<3 ; i++){
         cin>>arr2[i];
         
     }
     for(int i =0 ; i<3 ; i++){
         if(arr1[i]==arr2[i]){     
             
         }
         else if(arr1[i]>arr2[i]){
             count++;
         }
         else {
             temp++;
         }
          }
     cout<< count << " "<< temp ;
     
     
     return 0; 
}
