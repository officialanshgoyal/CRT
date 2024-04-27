// Power of a number 
#include<iostream>
using namespace std;


int power(int b,int e)
{
    if (e==0)
    return 1;

    return b* power(b,e-1);
}

int main(){
    int b,e;
    cout<< "input base";
   
    cin>>b;
    cout<< "iinput";
    cin>>e;


int result =power(b,e);
cout<<" result ="<<result;
return 0;
}









