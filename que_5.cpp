#include<iostream>
using namespace std;
long long int factorial(int n)
{

    if(n == 0 || n==1)
    {return 1;
    }
return n*factorial(n-1);
}
int main()
{
    long long int num;
    cout<< " Intour a number : ";
    cin>>num;
    long long int fact = factorial(num);
    cout<< " Factorial of "<< num << " is :"<< fact;
    return 0;
}
