#include<iostream>
using namespace std;

class fcfs
{	public:
    int burstTime[];
    int arrivalTime[];
    int processId[];
    int numberOfProcess;

    void getProcessData() 
    {
        cout("Enter the number of Process for Scheduling           : ");
        cin>>inputNumberOfProcess;
        numberOfProcess = inputNumberOfProcess;
        burstTime = new int[numberOfProcess];
        arrivalTime = new int[numberOfProcess];
        processId = new String[numberOfProcess];
        String st = "P";
        for (int i = 0; i < numberOfProcess; i++) 
        {
            processId[i] = st.concat(Integer.toString(i));
            cout<<"Enter the burst time   for Process - " + i + " : ";
            cin>>burstTime[i];
            cout<<"Enter the arrival time for Process - " + i + " : ";
            cin>>arrivalTime[i];
        }
    }

    void sortAccordingArrivalTime(int at[], int bt[], string pid[])
    {
        bool swapped;
        int temp;
        string stemp[];
        for (int i = 0; i < numberOfProcess; i++) 
        {
            swapped = false;
            for (int j = 0; j < numberOfProcess - i - 1; j++) 
            {
                if (at[j] > at[j + 1]) 
                {
                    //swapping arrival time
                    temp = at[j];
                    at[j] = at[j + 1];
                    at[j + 1] = temp;

                    //swapping burst time
                    temp = bt[j];
                    bt[j] = bt[j + 1];
                    bt[j + 1] = temp;

                    //swapping process id
                    stemp = pid[j];
                    pid[j] = pid[j + 1];
                    pid[j + 1] = stemp;

                    //enhanced bubble sort
                    swapped = true;
                }
            }
            if (swapped == false) 
            {
                break;
            }
        }
    }

    void firstComeFirstServeAlgorithm() 
    {
        int finishTime[] = new int[numberOfProcess];
        int bt[] = burstTime.clone();
        int at[] = arrivalTime.clone();
        string pid[] = processId.clone();
        int waitingTime[] = new int[numberOfProcess];
        int turnAroundTime[] = new int[numberOfProcess];
        sortAccordingArrivalTime(at, bt, pid);

        //calculating waiting & turn-around time for each process
        finishTime[0] = at[0] + bt[0];
        turnAroundTime[0] = finishTime[0] - at[0];
        waitingTime[0] = turnAroundTime[0] - bt[0];
        for (int i = 1; i < numberOfProcess; i++) 
        {
            finishTime[i] = bt[i] + finishTime[i - 1];
            turnAroundTime[i] = finishTime[i] - at[i];
            waitingTime[i] = turnAroundTime[i] - bt[i];
        }
        float sum = 0;
        for (int n : waitingTime) 
        {
            sum += n;
        }
        float averageWaitingTime = sum / numberOfProcess;

        sum = 0;
        for (int n : turnAroundTime) 
        {
            sum += n;
        }
        float averageTurnAroundTime = sum / numberOfProcess;

        //print on console the order of processes scheduled using FirstComeFirstServer Algorithm
        cout<<"FCFS Scheduling Algorithm : ";
        cout<<"%20s%20s%20s%20s%20s%20s\n", "ProcessId", "BurstTime", "ArrivalTime", "FinishTime", "WaitingTime", "TurnAroundTime";
        for (int i = 0; i < numberOfProcess; i++) 
        {
            cout<<"%20s%20d%20d%20d%20d%20d\n", pid[i], bt[i], at[i], finishTime[i], waitingTime[i], turnAroundTime[i];
        }
        cout<<"%80s%20f%20f\n", "Average", averageWaitingTime, averageTurnAroundTime;
    }

}

int main() 
{
fcfs fc;
fc.getProcessData();
fc.firstComeFirstServeAlgorithm();
return 0;
}