#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin>>n;
    int d, m;
    int count =0;
    int x =0;
    
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
        
    }
    cin>>d>>m;
    for(int i =0 ; i<n ; i++){
        for(int j=i;j<m+i;j++){
            count+=arr[j];
            //cout<< arr[j]<<endl;
                
        }
    
        if(count == d){
            x++;
        }
       count=0;
        
    }
    cout<<x;
    
   
   
}
