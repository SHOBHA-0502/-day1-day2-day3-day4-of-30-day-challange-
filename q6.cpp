#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n ;
    cin>> n ;
    int arr[n];
    float x , y , z ; 
     x=0;
    y=0;
    z=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            x+=1;
        }
        else if( arr[i]>0){
            y+=1;
        }
        else{
            z+=1;
        }
        
        
    }
    
    cout<<float (y/n)<<endl;
    cout<<  float (x/n)<<endl;
    cout<<  float (z/n)<<endl;
    
    return 0;
    
}
