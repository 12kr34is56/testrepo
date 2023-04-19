#include <iostream>
using namespace std;
class Student
{
protected:
    int Id;

public:
    string name;
    void set_data(int, string);
    void get_data(void);
};
void Student::set_data(int num, string str)
{
    Id = num;
    name = str;
}
void Student::get_data(void)
{
    cout << "The Id is:" << Id << endl
         << "The Name is :" << name << endl;
}

class Exam : public Student
{
protected:
    int Foit;
    int Maths;

public:
    void set_marks(int, int);
    void get_marks(void);
};
void Exam::set_marks(int F, int M)
{
    Foit = F;
    Maths = M;
}
void Exam::get_marks(void)
{
    cout << "Marks of Foit are :" << Foit << endl
         << "Marks of Maths are :" << Maths << endl;
}
class display_result : public Exam
{
protected:
    int percentage;

public:
    void result(void);
    void display(void);
};
void display_result::result(void)
{
    cout << "The Percentage of yours are:" << (Foit + Maths) / 2 << "%" << endl;
}
void display_result::display(void)
{
    get_data();
    get_marks();
    result();
}
int main()
{
    display_result krishna;
    krishna.set_data(101, "Krishna");
    krishna.set_marks(55, 89);
    krishna.display();
    return 0;
}