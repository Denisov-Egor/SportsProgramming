#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cin >> a >> b;

  int d = min(a, b);
  int r = max(a, b) - d;
  int m = r / 2;

  cout << d << ' ' << m;

}