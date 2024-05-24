// Binary search 
#include<iostream>
using namespace std;
int binarSearch(int arr[] ,int n, int k  )
{
 
 int s= 0;
 int e = n-1;

 int mid = s+(e-s)/2;
while (s<=e)
{
    if(arr[mid] == k ){
        return mid; 
    }
    else if(arr[mid]< k){
        s = mid+1;

    }
    else{
        e = mid-1;
    }
    mid = s+ (e-s)/2;
}

return -1;

}
int main() {
  //   function likh de
  int arr[ ] ={ 3,4,5,6,7,8,9,10} ;
  cout<<binarSearch(arr, 8 , 4);
return 0;
}