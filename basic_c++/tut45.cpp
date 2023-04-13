#include <iostream>
using namespace std;
class student
{
protected:
    int Id;

public:
    string name;
    void set_data(int, string);
    void get_data(void);
};
void student::set_data(int num, string str)
{
    Id = num;
    name = str;
}
void student::get_data(void)
{
    cout << "The ID is :" << Id << endl
         << "The name is :" << name << endl;
}
class Test : virtual public student
{
protected:
    int OS;
    int DBMS;

public:
    void set_marks(int, int);
    void show_data(void);
};
void Test::set_marks(int a, int b)
{
    OS = a;
    DBMS = b;
}
void Test::show_data(void)
{
    cout << "Marks in Operating System: " << OS << endl
         << "Marks in Dbms :" << DBMS << endl;
}
class CurAct : virtual public student
{
protected:
    int Anime;

public:
    void set_an(int);
    void dis_data(void);
};
void CurAct::set_an(int ani)
{
    Anime = ani;
}
void CurAct::dis_data(void)
{
    cout << "Marks in Anime is :" << Anime << endl;
}
class Result: public Test,public CurAct{
    public:
        void display(void){
            get_data();
            show_data();
            dis_data();
        }
};
int main()
{
    Result kris;
    kris.set_data(101,"Krishna");
    kris.set_marks(100,100);
    kris.set_an(25);
    kris.display();
    return 0;
}