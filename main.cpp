#include <iostream>
#include <string>
using namespace std;

int main()
{ // 0 1 2 3 4
  // ahmed
  string name;
  cin >> name;
  // using size, at
  cout << name.at(name.size() - 1);
  return 0;
}

// \0 => NULL