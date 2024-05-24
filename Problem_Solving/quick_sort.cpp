//quicksort  algorithm
#include<iostream>
using namespace std;
/*
 int find_pivot(vi &v,int l,int r){
    int pivot = v[l];
    int left=l;
    int right =r;
    while(left<right){
        while(v[l]<=pivot && l<r){
            l++;
        }
        while(v[right]>=pivot && l<r){
            r--;
            }
            if(l<r){
                swap(v[l],v[right]);
                }
                }
        swap(v[l],v[left]);
        
 }

*/
void quickSort( int arr[] ,int low,int high ){
   if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int partitionIndex = i+1;
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int arr[] = { 5,99,3,1,-2,-5,9,23};
    int n = 9  ;
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
return 0;
}