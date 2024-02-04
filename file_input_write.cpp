#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s1 = "This is aashish dhiman's Laptop";
    // Opening files using constructor and writing it
    ofstream out("sample.txt");
    out << s1;

    out.close();//to close the file
    return 0;
}