#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n ;
    int arr[n];
    int count = 0;
    int temp = 0;
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }
int y = arr[0];
int x = arr[0];
    for(int i =0 ;i<n ; i++){
        if(y<arr[i]){
            y=arr[i];
            count+=1;
        }
        for(int i =0 ;i<n ; i++){
        if(x>arr[i]){
            x=arr[i];
            temp+=1;
        }
    }
    
}
cout<< count  << " " << temp;
}