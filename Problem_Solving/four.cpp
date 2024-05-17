// juggling algo to rotate the array 
/* if n= 6 and d=4 
  then
   no of cycle = 2 it is easy to calculate it is the HCF of n and d 
   and length = 3
   n = no of cyle * length   
*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a<b){
        swap(a,b);
    }
    if ( b==1 || b==0){
        return a;
    }
    return gcd(b,a%b);
}
void juggling(int *arr ,int l,  int r , int k){

    int n=r +1 -l;
   int  number_of_cycle = gcd(n,k);
   int  length_of_cycle = n/number_of_cycle;

   for( int i=0; i< number_of_cycle ; i++){
    
   }

}

void solve(){

}
int main(){}