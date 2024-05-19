// juggling algo to rotate the array 
/* if n= 6 and d=4 
  then
   no of cycle = 2     it is easy to calculate it is the HCF of n and d 
   and length = 3
   n = no of cyle * length   
*/


#include<iostream>
#include<algorithm>
using namespace std;


int gcd(int a, int b){
    if (b==0) 
    {
        return a;
    }
    if(a == 0)
    {
        return b;
    }
    if(a > b)
      return gcd(b,a%b);
    else
    return gcd(a,b%a);
}
void juggling(int *a, int n, int k){
  
   int  number_of_cycle = gcd(n,k);
   int  length_of_cycle = n/number_of_cycle;
    
   for( int i=0; i< number_of_cycle ; i++){
      int temp = a[i];
      int z=i;
      for( int j= 0; j< length_of_cycle-1;j++){
        a[z] = a[(z+k) %n];
        z = (z+k)%n;
      }
      a[z] = temp;
   
   }
}

int main(){
    int n,k;
  
  cin>>n>> k;

  int a[20];
  for(int i=0 ; i < n; i++){
    cin>> a[i];
  }

  juggling(a,n, k);

  for(int i=0 ; i < n; i++){
    cout<< a[i]<< " ";
  }

    return 0;
}