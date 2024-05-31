#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[] = { 4,5,4,6,6,5,7};
// unique in array ;
int ans = 0; 
for( int i= 0 ; i< 7; i++ )
{
    ans= ans ^ arr[i];
}
cout<< " ans = "<< ans << endl;
// swap two no 
int a = 9 ; 
int b= 15;
int temp = a^b;
a= a^temp;
b=b^temp;
cout<< a <<" " <<b;
return 0;
}



















