#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;


void bestFit(int BlockMemorySize[], int m, int ProcessMemorySize[], int n)
{

    int CheckAllocation[n];
  
    
    memset(CheckAllocation, -1, sizeof(CheckAllocation));
  
    for (int i=0; i<n; i++)
    {
       
        int BestFitChecker = -1;
        for (int j=0; j<m; j++)
        {
            if (BlockMemorySize[j] >= ProcessMemorySize[i])
            {
                if (BestFitChecker == -1)
                    BestFitChecker = j;
                else if (BlockMemorySize[BestFitChecker] > BlockMemorySize[j])
                    BestFitChecker = j;
            }
        }
  
       
        if (BestFitChecker != -1)
        {
           
            CheckAllocation[i] = BestFitChecker;
            BlockMemorySize[BestFitChecker] -= ProcessMemorySize[i];
        }
    }
  
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i+1 << "\t\t" << ProcessMemorySize[i] << "\t\t\n";
        if (CheckAllocation[i] != -1)
            cout << CheckAllocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
  
int main()
{
    int BlockMemorySize[] = {100, 500, 200, 300, 600};
    int ProcessMemorySize[] = {212, 417, 112, 426};
    int m = sizeof(BlockMemorySize)/sizeof(BlockMemorySize[0]);
    int n = sizeof(ProcessMemorySize)/sizeof(ProcessMemorySize[0]);
  
    bestFit(BlockMemorySize, m, ProcessMemorySize, n);
  
    return 0 ;
}