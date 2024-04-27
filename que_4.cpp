// Recursively calculate the sum of array elements
#include<iostream>
using namespace std;
 

int arraySum(int arr[],int size)
{
    // BAse case : if the array is empty , return 0 
    if ( size == 0)
    {
        return 0;
    }
    // Recursive case: return the sum of the last element 
    // and the sum of the rest of the array 
    return arr[size-1] + arraySum(arr, size-1);

}


int main(){
    int nums[] = { 1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout<< " Array Element : "<< endl;
    // Loop through the array element and display
    for(int i =0; i<size; i++){
        cout<< nums[i] << ' ';

    }

    // Calculate the sum of the array element using recursion
    int sum = arraySum(nums, size);
    cout<< " \n sum of array elemnt using recursion "<<sum;

    return 0;
}



