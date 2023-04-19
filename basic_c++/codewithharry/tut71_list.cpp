#include<iostream>
#include<list>
using namespace std;
void display (list<int> &lst){
    list <int>::iterator ptr;
    for ( ptr = lst.begin(); ptr!=lst.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;
}
int main()
{
    list <int> l;
    list <int> l2(5);
    l.push_back(5);
    l.push_back(3);
    l.push_back(7);
    l.push_back(4);
    l.push_back(1);
    l.sort();
    list <int> ::iterator iter;
    iter = l2.begin();
    *iter=4;
    iter++;
    *iter=8;
    iter++;
    *iter=9;
    iter++;
    *iter=7;
    iter++;
    *iter=3;
    iter++;
    l2.sort();  
    // l.merge(l2);
    display(l);
    // l.reverse();
    display(l2);
    l.swap(l2);
    display(l);
    display(l2);
    // display(l2);
    return 0;
}