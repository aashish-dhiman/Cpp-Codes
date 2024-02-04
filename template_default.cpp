#include <iostream>
using namespace std;
//we can also write class in place of typename 
template <typename A=int, typename B=int,typename C=int> //template with multiple parameters and default type
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
             << this->Maths<<endl;
    }
};

int main()
{
    // int x;
    // float y;
    // int z;
    // cout<<"Enter the marks in Physics, Chemistry and Maths: ";
    // cin>>x>>y>>z;
    TestMarks<> student1(12,45,39); //default template as no type is passed
    student1.display();
    cout<<endl;
    TestMarks<int,float,float> student2(12,34.55,23.22); //default paarmeters gets override by these parameters
    student2.display();

    return 0;
}