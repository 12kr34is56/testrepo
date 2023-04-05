#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void check_bin(void);
    void display(void);
    void change(void);
};
void binary::read()
{
    cout << "Enter the binary number";
    cin >> s;
}
void binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect !!" << endl;
            exit(0);
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
void binary::change()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) == '1';
        }else{
            s.at(i) == '0';
        }
    }
}
int main()
{
    binary bin;
    bin.read();
    bin.check_bin();
    bin.display();
    bin.change();
    bin.display();
    return 0;
}