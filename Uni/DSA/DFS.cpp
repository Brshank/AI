#include<iostream>
#include<list>
#include<queue>
#include<map>
using namespace std;

template<typename T>

    class Graph
    {
    public:
        map<T,list<T> > l;
        void addEdges(T x, T y)
        {
         l[x].push_back(y);
         l[y].push_back(x);
        }

        void DFS_Traversal(T src  ,  map<T,bool> &visited)
        {
            cout<<src<<"--> ";
            visited[src]=true;
            for (T neighbour : l[src])
            {
                if(!visited[neighbour])
                {
                    DFS_Traversal(neighbour,visited);
                }
            }

        }


        void DFS(T src)
        {
            map<T,bool> visited;
            for (auto s:l)
            {
                T node=s.first;
                visited[node]= false;
            }
            DFS_Traversal( src,visited);
        }
    };

int main()
{   Graph<int> g;
    g.addEdges(0,1);
    g.addEdges(0,3);
    g.addEdges(1,0);
    g.addEdges(1,2);
    g.addEdges(2,1);
    g.addEdges(2,3);
    g.addEdges(3,2);
    g.addEdges(3,0);
    g.addEdges(3,4);
    g.addEdges(4,3);
    g.addEdges(4,5);
    g.addEdges(5,4);

    g.DFS(0);
    
    return 0;
}