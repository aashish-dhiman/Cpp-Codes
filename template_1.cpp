#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T[s];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    Vector<float> v1(4);
    v1.arr[0]=1.4;
    v1.arr[1]=6.4;
    v1.arr[2]=3.5;
    v1.arr[3]=1.2;

    Vector<float> v2(4);
    v2.arr[0]=1;
    v2.arr[1]=4;
    v2.arr[2]=2;
    v2.arr[3]=5;

    float a = v1.dotProduct(v2);
    cout<<a;

    return 0;
}