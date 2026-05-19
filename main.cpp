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

  string searchname;
  cin >> searchname;

  string ip;

  return 0;
}