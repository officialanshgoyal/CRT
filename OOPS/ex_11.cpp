#include<iostream>
using namespace std;

class First{
    public:
    First(string s){
        int arr[26] = {0};
        for(int i =0; i< s.length(); i++){
            char ch = s[i];
            int num = ch - 'a';
            arr[num]++;
        }
        for(int i =0; i< 26; i++){
            if(arr[i] != 0){
                char a = i + 'a';
                cout<<a<< ":"<< arr[i] << endl;
            }
        }

    }
    First(int mat[3][3]){
        int forSum = 0;
        int backSum = 0;
        for(int i=0; i<3; i++){
            forSum += mat[i][i];
            backSum += mat[3-i-1][3-i-1];
        }
    }

};


int main() {
    First f("anshgoyal"); 
    
    return 0;
}