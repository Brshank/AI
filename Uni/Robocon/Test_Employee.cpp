#include<iostream>
#inlcude<iomanip>
using namespace std;

//This whole code is dependent on Inheritance Logic in classes and how do you derive base class form parent classes
class Employee
{
    private:
    char Employee_Name;
    long int Employee_ID;
    public:
    void Getdata(){
        //code for the extractuon/print statment of the emplyee
    }
    void Putdata(){
    // code for insertion of the emplyees
    }
};

class Salary:private Employee
{
public:
Salary(char Name,long int ID): Employee(Name,ID)
{ Name=Employee_Name ;
  ID= Employee_ID;
 cout << "Constructing Salary\n"; }
~Salary() { cout << "Destructor called for Salary\n"; }

long double Basic_Pay;
long double HRA;
long double DA;
long double CLA;
Employee::Getdata;
int Calculate_Salary(){
//the formula used for calculationg the salary

}

};

int main(){
    Salary s;
    s.Calculate_Salary();

    return 0;
}