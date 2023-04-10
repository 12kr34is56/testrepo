#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=0;
        };
        Number(int num){
            a=num;
        }
        void display(void){
            cout<<"The number is :"<<a<<endl;
        }
        // Number(Number &obj){
        //     a=obj.a;
        // }
};
int main()
{
    Number a(4);
    a.display();
    // Number b(a);
    // b.display(); 
    Number c;
    c.display();
    Number b(c);
    b.display();
    return 0;
}