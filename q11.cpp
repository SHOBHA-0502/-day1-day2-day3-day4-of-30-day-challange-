#include <bits/stdc++.h>

using namespace std;


int main(){
    int n ; 
    cin >> n ;
    int a;
    int y;
    for(int i ; i< n ; i++){
        cin >> a;
        int y =(a%5);
        if(a<38){
            cout<<a<<endl;
        }
        
        else if(((a-y+5)-a)<3){
        cout<<(a-y+5) << endl;}
        else{
            cout<<a <<endl;
        }
        
       
    }
    
}