#include<iostream>
using namespace std;

void swap (int arr[] ,int i , int j){
    while(i<=j){
        swap( arr[i++] , arr[j--]);
    }
}
void swap2(int arr[],  int n, int k ){
    swap(arr , 0 , n-1 );
    swap( arr , 0 ,n-k-1);
    swap( arr , n-k , n-1);


}
int main (){
   int arr[9]={ 3,4,5,6,7,8,9,1,2};
   for( int i =0 ; i<9; i++){
    cout<<arr[i] << " ";
   }
   cout<< endl;

   swap(arr, 0,8);
   for( int i =0 ; i<9; i++){
    cout<<arr[i] << " " ;
   }
   
   cout<<endl;
   swap2(arr ,9 ,5);
   for( int i =0 ; i<9; i++){
    cout<<arr[i] << " ";
   }

    return 0;

}