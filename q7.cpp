// star printing problem 
#include<iostream> 
using namespace std;
int main(){
    /*int r,c;
    cin>>r>>c;
    */
    /*for(int i =0 ; i<r ; i++)
    { for(int j=0 ; j<c ; j++){
            cout<< "#";
        }
    cout<< endl ;
    }*/
    /////////////////////////////////////////////////////////
    /*for( int i = 0 ; i< r; i++){
        for(int j =0; j< c ; j++){
            if(i == 0 || i == r-1 ){
                cout<< "#";
            }
             else if(j == 0|| j == c-1){
                cout<< "#";
            }
            else {
                cout<< " ";
            }


        }
        cout<< endl;
        
    
    }
    


}*/
//////////////////////////
/*int n ;
cin>> n ;
for(int i=n ;i>=1; i--){
    for(int j=0 ; j<i ; j++){
        cout<< "#";


    }
    cout<<endl;
}
*///////////////////////////////////////////////
/*int n ;
cin>> n ;
for(int i=1 ;i<=n; i++){
    for(int j=1 ; j<=n ; j++){
        if(j<=n-i){
            cout<< " ";
        }
        else{
            cout<<"#";
        }
    }
    cout<<endl;
}

*/////////////////////////////////
/*
int n ; 
cin >> n ;
for( int i =1 ; i<=n; i++){
    for(int j=1;j<=i;j++){
        cout<< i << " ";

    }
    cout<< endl;

}
*/////////////////////////////////////
/* int n ; 
cin >> n ;
int x =1;
for( int i =1 ;i<= n;i++){
    for(int j = 1 ; j<=i;j++){
        cout<<x << " ";
         x++;
    }
    cout<<endl;

}*/
////////////////////////////////////////////////
/*int n ; 
cin>> n ;
for( int i =n ; i>=1 ; i--){
    for(int j=1; j<=i; j++ ){
        cout<<j<<" ";
    }
    cout<< endl;
}
*/////////////////////////////////////////////////
/*int n ; 
cin>> n ;
for(int i =1 ; i<=n; i++ ){
    for(int j =1 ; j<= i;j++){
        if((i+j)%2 == 0){
            cout<< "1" << " ";
        }
        else{
            cout<< "0"<< " ";
        }
    } 
    cout<< endl;

}*////////////////////////////////////////////////////////
/* int n ;
cin>>n ; 
for(int i=1 ; i<n ; i++){
    
        for(int k =1 ; k<=n-i ; k++){
            cout<< "  ";
        }
        for(int l =1; l<=n ; l++ ){
            cout<< "# ";
        }
        cout<< endl;

    }
    */////////////////////////////////////////////////
    int n ;
    cin>> n ;
    for(int i =1 ; i<=n ; i++){
        for(int j =1 ; j<=n ; j++){
            if(j<=n-i){
                cout<< "  ";
            }
            
        }
        for(int k =1 ; k<=i; k++){
            cout<<" * ";
        }
        cout<< endl;
    }



return 0;
}