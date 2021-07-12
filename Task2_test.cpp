
#include <iostream>
#include "Task2class.h"

using namespace std;

//gcc -o test class_test.cpp

int main()
{
    node a;
    a.insertValue(1);
    a.insertValue(2);
    a.insertValue(3); //2 here
    a.insertValue(4);
    a.insertValue(5);
    a.insertValue(6);
    a.insertValue(7);
    a.insertValue(8);
    a.insertValue(9);
    a.insertValue(10);
    a.insertValue(11);
    cout << a.to_str() << endl;
    a.InsertatIndex(2, 3);
    cout << a.to_str() << endl;
    a.deleteValueAtIndex(3);
    cout << a.to_str() << endl;
    
}