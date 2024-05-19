//printing the second largest value
//calculating median in the array

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int maxi(int *arr, int n){
    sort(arr, arr+n);
    int maxi = arr[n-1];
    int secmax = arr[n-2];
    for(int i=1; i<n; i++){
        if(secmax < maxi  ){
            return secmax;
        }
        if(secmax == maxi){
            secmax = arr[n-2-i];
        }
    }
    return secmax;
}
double median(int *arr, int n){
     sort(arr, arr+n);
     double ans;
     if(n&1){
        //odd
        ans = (double)arr[(n/2)];
     }
     else{
        //even
        ans = (((double)arr[n/2 - 1] + arr[(n/2)] )/2.0);
     }
     return ans;
}


int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n=7;
    int ans = maxi(arr, n);
    cout << ans<<endl;
    double med = median(arr,n);
    cout<< "median"<< med;
  
    return 0;
}