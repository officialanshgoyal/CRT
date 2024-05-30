// Adj matrix and Adj list

#include<bits/stdc++.h>
using namespace std;

/*




void graphs(){
    int n =7;
    // cin>> n;
    vector<vector<int>> edge{{1,2},{1,3},{1,4},{2,5},{2,6},{3,6},{4,5}};
}

*/
int vertArr[10][10];
void addedge(int u, int v){
    vertArr[u][v] = 1 ;
    vertArr[v][u] = 1 ;
    
}
class graph {

public: 
unordered_map< int,list<int >> m; 
void addedge1(int u, int v){
    m[u].push_back(v);
    m[v].push_back(u);
}
void display(int vertices){
    for(int i= 0; i< vertices ; i++){
        cout<< i <<" -> " ;
        for(auto j : m[i]){
            cout<< j << " ";
        } 
        cout<< endl;
    }
}

};
void display(int vertices){
    for (int i=0; i<vertices ; i++ ) {
        for(int j =0 ; j < vertices ; j++ ){
            cout<<vertArr[i][j]<< " ";

        }
            cout<< endl ;
    }
}

int main() {
    int vertices = 5;
    
    addedge(0, 1);
    addedge(1,2);

    addedge(2,3);

    addedge(0, 3);

    addedge(3,4);

    
    display(vertices);
graph g;
    g.addedge1(0, 1 );
    g.addedge1(1,2 );
    g.addedge1(2,3 );  
    g.addedge1(0,3 );
    g.addedge1(3,4 );
    
    g.display(vertices);
    return 0;
}