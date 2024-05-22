// count of prime number


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve (){
    int n ; 
    cin>> n;
    bool b[1000+1]; 

    memset(b,1,n);
    b[0] = 0 , b[1]=0;

    for(int  i = 2 ; i<= n ; i++){
        if(b[i]) {
        for(int j=i*i ; j<n ; j+=1){
            b[j]= 0;
        }
    }}
    int count = 0;
    for(int i =0 ; i<n+1 ; i++ ){
        if (b[i]){
            count++; 
        }
    }
    cout<< count<< " \n";
}

int main() {
    
    solve();
return 0;
}