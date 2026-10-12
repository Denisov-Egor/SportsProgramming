#include <iostream>

using namespace std;

int main()
{
  int c = 0;
  int x;

  cin >> x;

  c = x / 5;

  if (x % 5 != 0)
  {
    c++;
  }
  
  cout << c;
  
}