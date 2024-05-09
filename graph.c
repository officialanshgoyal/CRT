#include <stdio.h>
#define V 4

void init(int arr[V][V])
{
    int r, c;
    for (r = 0; r < V; r++)
    {
        for (c = 0; c < V; c++)
        {
            arr[r][c] = 0;
        }
    }
}

void insertEdge(int arr[V][V], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjMatrix(int arr[V][V])
{
    int r, c;
    for (r = 0; r < V; r++)
    {
        printf("%d", r);
        for (c = 0; c < V; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
}

/*
 * The main function that implements a graph. Here 'u' and 'v' are the vertices to be connected.
 */
int main()
{
    int adjMatrix[V][V];
    init(adjMatrix);
    insertEdge(adjMatrix, 0, 1);
    insertEdge(adjMatrix, 0, 2);
    insertEdge(adjMatrix, 1, 2);
    insertEdge(adjMatrix, 2, 0);
    insertEdge(adjMatrix, 2, 3);
    printAdjMatrix(adjMatrix);
    return 0;
}
