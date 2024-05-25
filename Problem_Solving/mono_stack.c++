#include<iostream>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include<unordered_map>
#include<limits.h>
#include<queue>
#include<set>
#include<vector>
using namespace std;




int main() {
    
    
    int arr[]  ={ 3,4,2,3,8,1,2,7,1,2};
    vector<int> ar;
    int n = sizeof(arr)/sizeof(arr[0]);
 stack< int> s;

    for(int i = 0 ; i< n ; i++ ){
        while(!s.empty() && s.top() > arr[i]){
            s.pop();
        }
        s.push(arr[i]);
    }

     while(!s.empty() ){
        ar.insert(ar.begin() , s.top());
        s.pop();
     }
   
   for( int i = 0 ; i<ar.size() ; i++){
    cout<<ar[i]<<" ";
   }


return 0;
}