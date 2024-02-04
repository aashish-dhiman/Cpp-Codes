#include <iostream>
using namespace std;

namespace MyWorld
{                   // Namespace declarations appear only at global scope.
    int x = 5, y;   // Namespace declarations can be nested within another namespace.
    void display(); // Namespace declarations don’t have access specifiers. (Public or private)
    class Outside;  // No need to give semicolon after the closing brace of definition of namespace.
    class Inside
    {
    public:
        void display();
    };
}
void MyWorld ::display()
{
    cout << "MyWorld ::display()\n";
}
class MyWorld ::Outside
{
public:
    void display()
    {
        cout << "MyWorld::Outside ::display()\n";
    }
};
void MyWorld::Inside ::display()
{
    cout << "MyWorld::Inside ::display()\n";
}

int main()
{
    MyWorld::y = 2; // defining y from namespace
    cout << "Value of X and Y is: " << MyWorld::x << " and " << MyWorld::y << endl;

    MyWorld::display(); // creating display function of namespace

    MyWorld::Outside obj1; // creating object of outside class in namespace
    obj1.display();

    MyWorld::Inside obj2; // creating object of Inside class in namespace
    obj2.display();

    return 0;
}