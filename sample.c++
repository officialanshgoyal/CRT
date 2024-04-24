// Bitset library using in c++

#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a=27;
    int b= a>>3;
    int c= 258;

    cout<<"a = "<< bitset<8>(a) << endl;
    cout<<"b = "<< bitset<8>(b) << endl;
    cout<<"c = "<< bitset<16>(c) << endl;


    // mujhe ek esa output chaiye jisme yeh sare bit 0 ho bas  4 poistion pe 1 chaiye

    int d=1 <<3  ;
    cout<<"d = "<< bitset<8>(d) <<"  d=" <<d;

}
