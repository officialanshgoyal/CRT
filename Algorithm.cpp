// count set bits in integer 
// Brian kernighan's Allgorithm
#include<iostream>
#include<bitset>
using namespace std;
int countSetBits(int x)
{
    int count = 0;
    while (x)
    {
        x= x& (x-1);
        count++;

    }
    return count;
}
int main(){
    int x= 172;
    int res = countSetBits(x);
    cout<<"172 = "<<bitset<16>(x) << endl;
    cout<<res;

}