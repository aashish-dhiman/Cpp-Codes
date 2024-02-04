#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;

    // opening file using using constructor and reading it
    ifstream in("sample.txt"); // class obj_name("file_name")
    // in>>s; //this will read only a single word from the file
    // cout<<s<<endl;
    getline(in,s); //this will read a single line from the file and stores it in string
    cout<<s;

    in.close(); // to close the file
    return 0;
}