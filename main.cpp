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
  cout << "Enter username" << endl;
  cin >> searchname;

  string ip;
  string username;
  string time;
  int minutes;
  int total = 0;

  while (file >> ip >> username >> time >> minutes) {
    if (username == searchname) {
      cout << ip << " ";
      cout << username << " ";
      cout << time << " ";
      cout << minutes << endl;

      total = total + minutes;
    }
  }
