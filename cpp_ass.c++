//Implementing friend function and friend class
#include <iostream>
using namespace std;

class smallest
{
    int a = 100;

public:
    friend class Largest;
};

class Largest
{
    int a = 10, b = 20, m = 30;

public:
    void set_data();
    friend void find_max(Largest);
};

void Largest::set_data()
{
    smallest s;
    cout << "value of A in smallest is" << s.a << endl;
    cout << "Enter the First No:" << endl;
    cin >> a;
    cout << "Enter the Second No:" << endl;
    cin >> b;
}

void find_max(Largest t)
{
    if (t.a > t.b)
        t.m = t.a;
    else
        t.m = t.b;

    cout << endl
         << "Maximum Number is\t" << t.m;
}

int main()
{
    Largest l;
    l.set_data();
    find_max(l);
    return 0;
}