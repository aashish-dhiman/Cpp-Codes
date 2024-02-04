#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string line;
  cout << "Enter the content ";
  getline(cin, line);
  ofstream fout;
  fout.open("sample.txt");

  fout << line;
  // Close the File
  fout.close();

  ifstream fin;
  fin.open("sample.txt");
  getline(fin, line);

  cout << line;
  // Close the file
  fin.close();

  return 0;
}