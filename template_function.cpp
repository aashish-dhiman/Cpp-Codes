// #include <iostream>
#include<bits/stdc++.h> //standard header file including all important header files
using namespace std;

template <typename T>
void swapNum(T x, T y)
{
    T temp = x;
    x = y;
    y = temp;
    cout << x << endl
         << y;
}

int main()
{
    int a = 5, b = 6;
    swapNum<float>(5.78, 6.78);
    // aliter we can also just pass value like this without argument type by defining variables earlier
    // swapNum(a,b);
    

    return 0;
}