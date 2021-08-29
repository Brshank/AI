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

        void BFS(T src)
        {
            map<T,bool> visited;
            queue<T> q;

            q.push(src);
            visited[src] = true;

            while(!q.empty())
            {   
                T node = q.front();
                q.pop();
                cout<<node<<" ";

                for(T neighbor:l[node]){
                    if (!visited[neighbor])
                    {
                        q.push(neighbor);
                        visited[neighbor]=true;
                    }
                    
                }
            }

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

    g.BFS(0);
    
    return 0;
}