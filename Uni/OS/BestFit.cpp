#include<iostream>
#include <cstring>
using namespace std;
class BestFit
{
public:
void logic(int Memorysize[],int a,int ProcessSize[],int b)
{
int CheckAllocation[b];
memset(CheckAllocation,-1,sizeof(CheckAllocation));

}
void display(int Memorysize[],int a,int ProcessSize[],int b)
{
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << i+1 << "\t\t" << ProcessSize[i] << "\t\t";
		if (CheckAllocation[i] != -1)
			cout << CheckAllocation[i] + 1;
		else
			cout << "Not Allocated";
		cout << endl;
	}
}

};


int main(){
// 212,417,112,426 processes to be implemented using Best fiot
int Memorysize[]={100,500,200,300,600};
int ProcessSize[]={417,212,426,112};
int a = sizeof(Memorysize)/sizeof(Memorysize[0]);
int b = sizeof(ProcessSize)/sizeof(ProcessSize[0]);  
    
  BestFit BF;
  BF.logic(Memorysize[],a,ProcessSize[],b);

    return 0;
}