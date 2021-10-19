#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

class Algo
{
    public:
    int V =9;
    //the representation of graph in the form of a adjacent matrix
    int adjMatrix[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                            { 4, 0, 8, 0, 0, 0, 0, 11, 0},
                            { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                            { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                            { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                            { 0, 0, 4, 14, 10, 2, 0, 0, 0 }, 
                            { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                            { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                            { 0, 0, 2, 0, 0, 0, 6, 7, 0 }};
    

    int findMin(int key[], bool included[])
    {
        int min = INT_MAX, min_index;
    
        for (int i = 0; i < V; i++)
            if (included[i] == false && key[i] < min)
                min = key[i], min_index = i;
    
        return min_index;
    }
    void display(int parent[])
    {   int sum=0;
        cout<<"Edge \tWeight\n";
        for(int j =0; j<V; j++)
        {
            for (int i = 1; i < V; i++)
            {
                if(parent[i]==j)
                {
                    sum+=adjMatrix[i][parent[i]];
                    cout<<parent[i]<<" - "<<i<<" \t"<<adjMatrix[i][parent[i]]<<" \n";
                }
            }
        }
        cout<<"final price of pipes Rs."<<sum*120;
        
    }
    void prims()
    {
        int parent[V];
        int key[V];
        bool included[V];
        for (int i = 0; i < V; i++)//initializing values of keys to infinity
            key[i] = INT_MAX, included[i] = false;
        key[0] = 0;
        parent[0] = -1;//node 0 has no parent as it is the starting node 
        for (int i = 0; i < V - 1;i++)
        {
            int u = findMin(key, included);//finding min key value from current nodes
            included[u] = true;
            for (int i = 0; i < V; i++)//updatign key values
                if (adjMatrix[u][i] && included[i] == false && adjMatrix[u][i] < key[i])
                    parent[i] = u, key[i] = adjMatrix[u][i];
        }
    
        
        display(parent);
    }
};
 
int main()
{
    
    Algo one;
    one.prims();
 
    return 0;
}