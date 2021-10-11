#include<iostream>
#include<string>

class Employee
{
    public:
    char* Name;
    int ID;
    
    void IntroduceYourSelf()
    {
        std::cout<<"Name -"<<Name<<std::endl;
        std::cout<<"ID -"<<ID<<std::endl;
    }
};
int main()
{
    Employee employee1;
    employee1.Name = "Aniruddh";
    employee1.ID = 133;
    employee1.IntroduceYourSelf();
    return 0;
    
}
