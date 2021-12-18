#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int arr[5];
    long long int count =0;
    long long int min,i;
    
     
     long long int y =0;
        
    
    for(i = 0; i < 5; i++){
        cin >> arr[i];
        count +=arr[i];
    }
     
    min = arr[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    
        if(y<arr[i]){
            y = arr[i];
        }
    }   
        
    
     


    cout << count - y <<" "<<count - min;
}