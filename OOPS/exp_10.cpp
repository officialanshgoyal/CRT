// To convert Negitive number  in positive using structure in C++

#include<iostream>
using namespace std;

struct Convert 
{

    int number;
    
   int val(){ 
    if (number < 0)
    {
        return (number * (-1));

    }
    else{
        return number;
    }
}
};
