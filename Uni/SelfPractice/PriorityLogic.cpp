#include <iostream>
#include <queue>
#include <vector>
#include<stdlib.h>
using namespace std;
class Logic
{
public:
    //Neighbours List  
    vector<int> l0 = {1, 35, 36};
    vector<int> l1 = {0, 8, 2};
    vector<int> l2 = {1, 6, 3};
    vector<int> l3 = {4, 5, 2};
    vector<int> l4 = {3, 5};
    vector<int> l5 = {3, 4, 6, 12};
    vector<int> l6 = {2, 5, 7, 11};
    vector<int> l7 = {6, 8, 10};
    vector<int> l8 = {1, 7, 9};
    vector<int> l9 = {8, 18, 30, 31, 34};
    vector<int> l10 = {7, 9, 11};
    vector<int> l11 = {6, 10, 12, 17};
    vector<int> l12 = {5, 11, 13};
    vector<int> l13 = {12, 14};
    vector<int> l14 = {13, 15, 17};
    vector<int> l15 = {14, 16};
    vector<int> l16 = {15, 17, 18};
    vector<int> l17 = {11, 14, 16};
    vector<int> l18 = {9, 11, 16, 19};
    vector<int> l19 = {18, 20};
    vector<int> l20 = {19, 21, 22, 30};
    vector<int> l21 = {20};
    vector<int> l22 = {20, 23};
    vector<int> l23 = {22, 24};
    vector<int> l24 = {23, 25};
    vector<int> l25 = {24, 26, 29};
    vector<int> l26 = {25, 27, 28};
    vector<int> l27 = {26, 28, 33};
    vector<int> l28 = {26, 27, 29, 33};
    vector<int> l29 = {25, 28, 30, 33};
    vector<int> l30 = {20, 29, 31};
    vector<int> l31 = {9, 29, 30, 35};
    vector<int> l32 = {29, 33, 35};
    vector<int> l33 = {27, 28, 32};
    vector<int> l34 = {9, 35};
    vector<int> l35 = {31, 32, 34, 36};
    vector<int> l36 = {0, 35};

    // Neighbour's Graph  Ends


    //Adjacency List for all Nodes
    vector<int> adjList[37] = {l0, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19, l20, l21, l22, l23, l24, l25, l26, l27, l28, l29, l30, l31, l32, l33, l34, l35, l36};
    
    int Xpos;
    int pos[2] = {};  //Detective Postions here (D1,D2)
    int priority[37] = {0};  //Priority of each Node

    //Function for Updatinig The Priority Layer Wise:
    void updatePriority()
    {
        priority[37]={0};

        for (int i = 0; i < 2; i++)
        {
          layering(pos[i]);
        }
    }
    void layering(int val)
    {
        queue<int> readyQueue;
        readyQueue.push(val);
        bool visited[37] = {0};
        visited[val] = 1;
        int p[37] = {0};
        while (!readyQueue.empty())
        {
            int current = readyQueue.front();
            readyQueue.pop();
            // cout << current << endl;
            for (auto x : adjList[current])
            {
                if (!visited[x])
                {

                    readyQueue.push(x);
                    visited[x] = 1;
                    p[x] = p[current] + 1;
                    // cout << x << " " << p[x] << endl;
                }
            }
        }
    
        // cout << "***********************" << endl;
        for (int i = 0; i < 37; i++)
        {
            priority[i] += p[i];
        }
        /*for(int i=0;i<10;i++)
      {
          cout<<i<<" - "<<priority[i]<<endl;
      }*/
    }
    void print()
    {
        for (int i = 0; i < 37; i++)
        {
            cout << i << " - " << priority[i] << endl;
        }
        findMax();
    }
    void findMax()
    {
        int max = 0;
        int m = 0;
        for (int i = 0; i < 37; i++)
        {
            if (priority[i] > max)
            {
                max = priority[i];
                m = i;
            }
        }
        cout << m << ":" << max << endl;
    }
    void AssignPos()
    {   int p1,p2,p3;
        int max=37;
        while (true)
        {
            p1=rand()%max;
            p2=rand()%max;
            p3=rand()%max;
            if (p1==p2|| p2==p3 || p3==p1) continue;
            else
            {
                pos[0]=p1;
                pos[1]=p2;
                int Xpos=p3;
                break;
            }
           
       }
            cout<<"The  Position of police(1) is-::"<<pos[0]<<endl;
            cout<<"The  Position of police(2) is-::"<<pos[1]<<endl;
            cout<<"The  Position of Mr. X is-::"    <<Xpos<<endl;
//Now After assigning it for the first time 
    }

void UpdatePolicePos()
{   
    // int nxtNeighbours[];
    //police (1&2)
    
    for (int i = 0; i < 2; i++)
    {
        int choice=adjList[pos[i]][rand()%adjList[pos[i]].size()];
        // cout<<"The choice is ::"<<choice;
        pos[i]=choice;
    }
    
    
}
bool PoliceCaughtmrX()
{
//if x has been caught ?

for (int i = 0; i < 2; i++)
    {
        if(pos[i]==Xpos){
            return true;
        }
    }
    return false;

}




void updateXpos()
{
//updates the pos of Mr. X
int max=0;
int maxPos=0;
for(auto x:adjList[Xpos])
{
    if(priority[x]>max)
    {
        max=priority[x];
        maxPos=x;
    }
}
Xpos=maxPos;
}

void printPos()
{
// prints the updated postion
cout<<"The Updated Position of police(1) is-::"<<pos[0]<<endl;
cout<<"The Updated Position of police(2) is-::"<<pos[1]<<endl;
cout<<"The Updated Position of Mr. X is-:::"<<Xpos<<endl;
}
    
    
    void GameLoop()
    {
        AssignPos();
        while (!PoliceCaughtmrX())
        {
            updatePriority();
            updateXpos();
            UpdatePolicePos();
            printPos();

        }
    }

};



int main()
{
    Logic one;
    one.GameLoop();

    
}