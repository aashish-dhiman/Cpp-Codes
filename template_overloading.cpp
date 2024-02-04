#include <iostream>
using namespace std;

// function without template
void Func(int x, int y)
{
    cout << "The sum of the two numbers is: " << x + y << endl;
}
// function with template with one argument
template <class T1, class T2>
void Func(T1 x, T2 y)
{
    cout << "The sum of the two numbers is: " << x + y << endl;
}
// function with template with three arguments
template <class T1, class T2, class T3>
void Func(T1 x, T2 y, T3 z)
{
    cout << "The sum of the three numbers is: " << x + y + z << endl;
}

int main()
{   // exact match takes highest priority
    Func(8,9); //exact match
    cout<<endl;
    Func<int,int>(8,8);
    cout<<endl;
    Func<int,float,float>(6,6.5,6.5);
    return 0;
}