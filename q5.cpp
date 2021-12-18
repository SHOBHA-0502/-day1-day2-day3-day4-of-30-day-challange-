#include<iostream>
using namespace std;
     
int main(){
    int n ; 
     cin>> n ;
     int x , y ;
     x =0;
     y =0;
     int arr[n][n];
     for(int i =0 ; i< n ; i++){
         for(int j =0 ; j<n ; j++){
             cin>>arr[i][j];}
     }
             
           for(int i =0 ; i< n ; i++){
         for(int j =0 ; j<n ; j++){  
             if(i==j){
                 x += arr[i][j];
             }
             if (i+j == n-1 ){
                 y += arr[i][j];
                 
             }
             
         }
     }
     
     cout<<abs(x-y);
    
    
    return 0;
}     