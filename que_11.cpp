// to find the greatest common driver 

#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    if(x==0)
    return  y;
    if(y==0)
    return x;
    /* This is done so that both numbers are always greater than zero */
    return gcd(y, x % y);
}

int main(){
    int n1, n2;
    cout<< " input the first number ";
    cin>> n1;
    cout<<"input the second number ";
    cin >>n2;
    
    cout << "\nThe GCD of " << n1 << " and " << n2 << " is : " << gcd(n1, n2);
	return 0;
}