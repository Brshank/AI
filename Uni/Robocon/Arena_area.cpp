// Write a program to print the area of the 
// arena (rectangle) by creating
// a class named 'Arena_Area' taking
// the values of its length and breadth
// as parameters of its constructor
// and having a function named 
// 'return_Arena_Area' which returns the area
// of the arena. Length and breadth of the 
// rectangle are entered through keyboard.

// 1.	Name: Brshank Singh Negi
// 2.	Roll. No.: I032
// 3.	SAP ID: 70122000101
// 4.	Branch, Course, Year: Comp Sci., Artificial Intelligence,2nd Year 

#include<iostream>
#include<iomanip>

using namespace std;

class Arena_area
{

public:
    void return_Arena_Area(long double length, long double breadth)
    {
    long double Area;
    Area = (length * breadth);
    cout<<"The area of the platform is:= '"<<setprecision(3)<<fixed<<Area<<"' Sq. Units";
    }
};
int main()
{   long double l, b;
    cout<<"\nKindly Enter the Dimensions=:"<<endl;
    cout<<"Enter Length== " ; cin>> l ;
    cout<<"Enter Breadth== "; cin>> b ;

    Arena_area a;
    a.return_Arena_Area(l,b);

    return 0;
}