#include <cmath>
#include <cstdio>
#include<string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //take input a charachter string of size 10 ;   HH:MM:SSPM or HH:MM:SSAM;
    char s[10];
    //use gets to input string
    cin>>s;
    if(s[8]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            s[0]=s[1]='0';
        }
    }
    else{

        if(s[0]=='0' && s[1]=='8'){
            s[0]='2';
            s[1]='0';
        }
        else if(s[0]=='0' && s[1]=='9'){
            s[0]='2';
            s[1]='1';
        }
        else if(!(s[0] == '1' && s[1]=='2')) {
            s[0]+=1;
            s[1]+=2;
        }
    }
    s[8] ='\0';
    puts(s);
    return 0;
}