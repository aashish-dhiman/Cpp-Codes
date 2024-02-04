
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int a, b;

    friend float distance(Point, Point);

public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
};
float distance(Point C, Point D)
{

    float c = sqrt(powf((C.a - D.a), 2) + powf((C.b - D.b), 2));
    return c;
}
int main()
{
    float x, y;
    Point C, D;
    cout << "Enter x1 and y1 coordinate respectively:";
    cin >> x >> y;
    C.setvalue(x, y);
    cout << "Enter x2 and y2 coordinate respectively:";
    cin >> x >> y;
    D.setvalue(x, y);
    float c = distance(C, D);
    cout << "The distance between the points is: " << c;

    return 0;
}