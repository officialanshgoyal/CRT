// Recursive function to cal the sum of a digit of a
#include<iostream>
using namespace std;
int sumOfDigits(int number)
{
    if (number >=0 && number <=9)
    return number;

    return(number % 10)+ sumOfDigits(number / 10);
}

int main(){
    int n ; 
    cout<< " enter the Number";
    cin>>n;
    int sum = sumOfDigits(n);
    cout<< "the sum is  "<< sum;
    return 0;
}