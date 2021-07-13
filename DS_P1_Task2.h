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
    node() //method
    {
        size = 0;
        capacity = 5;
        data = new int[capacity];  //[0,0,0,0,0,0,0,0,0,0]
    }
    void insertValue(int number);
    void InsertatIndex(int number, int index);
    void deleteValueAtIndex(int index);
    string to_str();
    ~node() 
    {
        delete[] data;
    }
};

void node::insertValue(int number)
{
    if (size == capacity)
    {
        capacity = capacity + 1;
        int *copyData = new int[capacity];
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
    else
    {
        data[size] = number;
        size++;
    }
}

void node::InsertatIndex(int index,int number)
{
    // [0,0,0,0,0,0,0,0,0,0] //data
    // [0,0,1,0,0,0,0,0,0,0,0] //copydata insert at second index
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
        int *copyData = new int[capacity];
        for (int i = 0; i < index; i++)
        {
            copyData[i] = data[i];
        }
        copyData[index] = number;
        for (int j = index + 1; j < capacity; j++)
        {
            copyData[j] = data[j - 1];
        }
        delete[] data;
        data = new int[capacity];
        for (int k = 0; k < capacity; k++)
        {
            data[k] = copyData[k];
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

string node :: to_str()
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