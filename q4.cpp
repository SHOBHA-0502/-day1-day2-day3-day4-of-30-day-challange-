#include <bits/stdc++.h>

using namespace std;
int main(){
    int n ;
    cin>>n ;
    long long int count =0;
    long long int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
        count+= arr[i];
    }
    cout<< count ;
    return 0 ;
    
}