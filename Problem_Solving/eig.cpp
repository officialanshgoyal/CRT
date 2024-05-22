// Mode in Array 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

typedef vector<int> vi;
typedef vector<int> vs;
typedef unordered_map< int , int>  mii;

typedef mii::iterator miitr ; 

#define pb push_back
#define mp make_pair
#define forn(i,n)

vi input_vector(){
    int n ; 
    cin>> n;
    vi v(n);
    for ( int i =0 ; i< n ;i++){
            cin>> v[i];
    }
return v;

}

void print_vector( vi &v){
    for ( int i =0 ; i< v.size() ;i++){
        cout<< v[i]<<" ";
        }
        cout<< " \n";
}

int find_mode(vi &v){
    map< int, int >counts;
    for(int i ; i< v.size(); i++)
    {
        counts[v[i]]++;
    }
 
    int mode = v[0], max_count= 1;
     for(miitr itr = counts.begin() ; itr != counts.end(); itr++ )
     {
        if (itr -> second > max_count)
        {
            mode = itr -> first; 
            max_count = itr->second;
        }
     }
     return mode;
}


int main() {
    
return 0;
}