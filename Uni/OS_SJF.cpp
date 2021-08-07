#include <iostream>
#include<algorithm>
using namespace std;
void SJF()
{
    float average_TAT=0.0, average_WT=0.0;
    int number=0,CompileTime=0,ArrivalTime=0,BurstTime=0,TurnAroundTime=0,WaitingTime=0;
    int sum1=0,sum2=0;
    cout<<"SJF (Shortest Job First), Non Preemptive:\n";
    cout<<"Enter the Number of processes: ";
    cin>>number; 
    int arr[number][6]={0}; 
    //For inputting the values in the Gantt Chart!
    for(int i=0;i<number;i++)
    {
        cout<<"Process "<<i+1<<":"<<endl;
        cout<<"Arrival Time : ";
        cin>>ArrivalTime;
        cout<<"Burst Time : ";
        cin>>BurstTime;
        arr[i][0]=i+1;
        arr[i][1]=ArrivalTime;
        arr[i][2]=BurstTime;
    }
    
    for(int i=0;i<number;i++)
    {
        if(i==0)    //if only one process CT=BT
        {
            arr[i][3]=arr[i][2];
        }
        else
        {
            if(arr[i][1]<=arr[i-1][3])  //AT<=CT of prev process
            {
                arr[i][3]=arr[i-1][3]+arr[i][2];
            }
            else
            {
                int blank=arr[i][1]-arr[i-1][3];
                arr[i][3]=arr[i-1][3]+arr[i][2]+blank;
            }
        }
    }
    
    for(int i=0;i<number;i++)
    {
        // TAT = CT - AT
        arr[i][4] = arr[i][3] - arr[i][1];
        
        // WT = TAT - BT
        arr[i][5] = arr[i][4] - arr[i][2];
        
        //Sum of the Turn Around Time
        sum1+=arr[i][4];
        //Sum of the Waiting Time
        sum2+=arr[i][5];
    }
    
    //Full Forms
    cout<<endl;
    cout<<"Arrival Time -> AT"<<endl;
    cout<<"Burst Time   -> BT"<<endl;
    cout<<"Compile Time -> CT"<<endl;
    cout<<"Turn Around Time -> TAT"<<endl;
    cout<<"Waiting Time -> WT"<<endl;
    cout<<endl;
    
    // Display the Table
    cout<<"|No"<<"   |   "<<"AT"<<"    |    "<<"BT"<<"    |    "<<"CT"<<"    |    "<<"TAT"<<"    |    "<<"WT"<<"    |    "<<"RT"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<"_____________________________________________________________"<<endl;
        cout<<"|"<<arr[i][0]<<"    |    "<<arr[i][1]<<"    |    "<<arr[i][2]<<"    |    "<<arr[i][3]<<"    |      "<<arr[i][4]<<"    |    "<<arr[i][5]<<"    |    "<<arr[i][5]<<endl;
    }
    
    cout<<endl;
    average_TAT=(float)sum1/(float)number;
    average_WT=(float)sum2/(float)number;
    cout<<"Average Turn Around Time: "<<average_TAT<<endl;
    cout<<"Average Waiting Time: "    <<average_WT<<endl;
   
    
}
int main()
{
    SJF();
    return 0;
} 