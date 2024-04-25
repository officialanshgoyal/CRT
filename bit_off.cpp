#include<iostream>
#include<bitset>
using namespace std;

// Turn off k=4th bit in a number
int turnOffKthBit(int n , int k)
{
    return n & ~(1 << (k-1));

}
// turn on kth bit in a number             
int turnOnKthBit(int n,int k){
    //
}