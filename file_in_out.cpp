#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // to write in file
    string name;
    cout << "Enter the player name: ";
    cin >> name; //takes single word only 
    // getline(cin,name); //to take name with multiple word
    ofstream store_name("name.txt");
    store_name << name + " is my name";
    store_name.close();

    // to read from file
    string content;
    ifstream display_name("name.txt");
    // display_name>>content; //store only single word
    getline(display_name, content);
    cout << content;
    display_name.close();

    return 0;
}