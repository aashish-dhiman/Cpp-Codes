#include <iostream>
using namespace std;
//we can also write class in place of typename 
template <typename A, typename B,typename C> //template with multiple parameters
class TestMarks
{
    A Physics;
    B Chemistry;
    C Maths;

public:
    TestMarks(A marks1, B marks2, C marks3)
    {
        Physics = marks1;
        Chemistry = marks2;
        Maths = marks3;
    }
    void display()
    {
        cout << "Marks in Physics, Chemistry and Maths are: "<<endl<<this->Physics << endl
             << this->Chemistry << endl
             << this->Maths;
    }
};

int main()
{
    int x;
    float y;
    int z;
    cout<<"Enter the marks in Physics, Chemistry and Maths: ";
    cin>>x>>y>>z;
    TestMarks<int,float,int> student(x,y,z);
    student.display();

    return 0;
}