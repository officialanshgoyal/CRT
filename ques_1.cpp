// clear the lowest set bit of x in c++
#include<iostream>
#include<bitset>
using namespace std;
int main() {
    // int a=174;
    // int b= a & (a-1);


    // cout<<"a"<< bitset<16>(a) <<endl;
    // cout<<"b"<< bitset<16>(a-1) <<endl;
    // cout<<"c"<< bitset<16>(b) <<endl;

    int x=148;
    int y= x & ~(x-1);
    cout<<"x= "<< bitset<16>(x) <<endl;
    cout<<"x= "<< bitset<16>(x-1) <<endl;
    cout<<"y= "<< bitset<16>(y) <<endl;



}