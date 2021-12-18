#include <bits/stdc++.h>

using namespace std;

int main(){
    int s , t;
    cin>> s >>t;
    int a , b ; 
    cin>>a >> b;
    int m , n ;
    cin>> m >> n ;
    int x , y;
    int count , temp ;
    count = 0 ; temp =0 ;
    for(int i =0; i< m; i++){
        cin >>x; 
        if(s<=(a+x)&& (a+x)<=t){
        
            count++;
        }
    }
     for(int i =0; i<n; i++){
        cin >>y; 
        if(s<=(b+y) && (b+y)<=t){
            
            temp++;
        }
    }
    cout<< count << endl<<temp;
    
    
}
