// Double reversal technique to  shift array by k element 
#include<iostream>
using namespace std;

void swap (int arr[] ,int i , int j){
    while(i<=j){
        swap( arr[i++] , arr[j--]);
    }
}
void kswap( int arr[] , int n , int k ){
    swap(arr , 0 , n-1);
    swap( arr ,0 , n-k-1);
    swap(arr , n-k , n-1);
}



int main() {

    int arr[9] = {6 ,7,0,5,6,7,8,2 ,1};
    kswap (arr , 9 , 2);
    for(int i= 0 ; i<9 ;i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}
