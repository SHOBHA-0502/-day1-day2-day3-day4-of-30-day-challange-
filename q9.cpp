#include <bits/stdc++.h>

using namespace std;


   
   int main(){
       int n ; 
       cin>>n;
       int arr[n];
       int y;
       int count =0;
       for(int i=0; i<n ; i++){
           cin>>arr[i];
           }
           
       y = arr[0];
        for(int i =0 ; i<n ; i++){
            if(arr[i]>=y){
               y = arr[i];
            }
            
            
        }
       for(int i =0 ; i< n ; i++){
           if(arr[i]== y){
               count++;
           }
           
       }
       cout<< count ;
      
   }
