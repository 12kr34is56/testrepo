#include <iostream>
using namespace std;
//base class 
class Employee
{
public:
    int id;
    float Salary = 4500.0;
    Employee(int num)
    {
        id = num;
    }
    Employee() {}
};
//derive class
class Programmer : public Employee
{
public:
    string lang = "C++";
    Programmer(){}
    int identity;
    Programmer(int inpid)
    {
        identity = inpid;
    }
    void display(void)
    {
        cout << "The id is :" << identity << " and language is :" << lang << endl;
    }
    
};
//Multilevel derive class 
//Right now it is not working 
// class Senior_pro : public Programmer
// {
// public:
//     int exper;
//     Senior_pro(int i,string s,int ex)
//     {
//         id=i;
//         s= lang;
//         exper = ex;
//     }
//     void print(void)
//     {
//         cout << "The person id:" << id << endl
//              << "The language use : " << lang << endl
//              << "Experience :" << exper << endl;
//     }
    
// };
int main()
{
    Programmer kv(1);
    kv.display();
    cout << "The language is :" << kv.lang << endl;
    int s = kv.Salary;
    cout << "Salary:" << s;
    // Senior_pro aryaan(1,"Python",5);
    // Senior_pro
    return 0;
}