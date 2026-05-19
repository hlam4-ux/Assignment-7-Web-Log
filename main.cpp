#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ifstream file("WebLog.txt");
  if (!file) {
    cout << "file not found" << endl;

    return 1;
  }

  string line;

  while (getline(file, line)) {
    cout << line << endl;
  }