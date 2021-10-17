#include<iostream>
using namespace std;
class Qsort
{
public:
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int array[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=low;
    while(i<j)
    {
        do{
            i++;
        }while(array[i]<=array[pivot]);
        while (array[j] >array[pivot])
        {
            j--;
        }
        if(i<j)
        {
            swap(&array[i],&array[j]);
        }

    }
    swap(&array[low],&array[j]);
    return j;
}
void quicksort(int array[], int low,int high )
{
    if(low<high)
    {
        int j=partition(array,low,high);
        quicksort(array,low,j);
        quicksort(array,j+1,high);
    }
}

};

int main()
{ 
     Qsort q;
    int arr[]={5, 1, 0, 5, 26, 47, 10,99, 23,32};
    q.quicksort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}

void print(int arr[], int n)
{
    cout <<"{";
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != n)
            {
            cout << arr[i] ;
            cout<<",";
            }
        else
            cout << arr[i];
    }
    cout << "}";

}
