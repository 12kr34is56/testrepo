#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void set_data(void){
            cout<<"Enter the Id :";
            cin>>id;
            count++;
        }
        void display_data(void){
            cout<<"The Id of Employee is :"<<id<<" of Employee number -->"<<count<<endl;
        }
        static void get_count(void){
            cout<<count<<endl;
            
        }
};
int Employee ::count=100;
int main()
{
    Employee kv,yash,harish;
    kv.set_data();
    kv.display_data();
    Employee::get_count();
    yash.set_data();
    yash.display_data();
    // yash.get_count();
    Employee::get_count();
    harish.set_data();
    harish.display_data();
    // harish.get_count();
    Employee::get_count();
    return 0;
}