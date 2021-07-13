#include <iostream>
#include <string>
using namespace std;

class node
{
private:
    int size;
    int capacity;
    int *data;

public:
    node() //method for making a constructor
    {
        size = 0;   
        capacity = 5;
        data = new int[capacity];  //[0,0,0,0,0,0,0,0,0,0]
    }
    void insertValue(int number);
    void InsertatIndex(int number, int index);
    void deleteValueAtIndex(int index);
    string to_str();        //returns array as string from the library
    ~node()                 //destructor
    {
        delete[] data;
    }
};

void node::insertValue(int number)      //function for inserting the value inside an array
{
    if (size == capacity)           //for dynamically allocation of the space of the array
    {
        capacity += 1;
        int *copyData = new int[capacity];          //temporary copydata[0] --> copydata[6]
        for (int i = 0; i < capacity; i++)
        {
            copyData[i] = data[i];
            if (i == capacity - 1)
            {
                copyData[i] = number;
            }
        }
        size++;
        delete[] data;
        data = new int[capacity];
        for (int j = 0; j < size; j++)
        {
            data[j] = copyData[j];
        }
        delete[] copyData;
    }
    else        //within the limits of the capacity insert values in array
    {
        data[size] = number;
        size++;
    }
}

void node::InsertatIndex(int index,int number)
{
    if (index>=size || index <0 ){  
        cout<<"---BEWARE--->Invalid Index";
    }
    if (size == capacity)
    
    {
        int newCap = capacity + 1;
        int *copyData = new int[newCap];
        for (int i = 0; i < index; i++)
        {
            copyData[i] = data[i];
        }
        copyData[index] = number;
        for (int j = index + 1; j < newCap; j++)
        {
            copyData[j] = data[j - 1];
        }
        delete[] data;
        capacity = newCap;
        data = new int[capacity];
        for (int k = 0; k < capacity; k++)
        {
            data[k] = copyData[k];
        }
        delete[] copyData;
        size++;
    }
    else
    {
        int *copyData = new int[capacity];  //temp array copyData
        for (int i = 0; i < index; i++)
        {
            copyData[i] = data[i];
        }

        copyData[index] = number;
        for (int j = index + 1; j < capacity; j++)  //copying values to the right of the index into the temp array 
        {                               
            copyData[j] = data[j - 1];
        }
        delete[] data;
        data = new int[capacity];
        for (int k = 0; k < capacity; k++)
        {
            data[k] = copyData[k];      //copying from copyData to  data array
        }
        delete[] copyData;
        size++;
    }

}
void node::deleteValueAtIndex(int index)
{
    if (size <= capacity)
    {
        int *newData = new int[capacity];
        for (int i = 0; i < index; i++)
        {
            newData[i] = data[i];
        }
        for (int j = index; j < capacity; j++)
        {
            newData[j] = data[j + 1];
        }
        delete[] data;
        data = new int[capacity];
        for (int k = 0; k < capacity; k++)
        {
            data[k] = newData[k];
        }
        delete[] newData;
        size--;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}

string node :: to_str()  //returns array as a string
{
    if (size == 0)
    {
        string returnString = "[]";
        return returnString;
    }
    string returnstring = "";
    returnstring += "[";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            returnstring += to_string(data[i]) + "]";
        }
        else
        {
            returnstring += to_string(data[i]) + ",";
        }
    }
    return returnstring;
}