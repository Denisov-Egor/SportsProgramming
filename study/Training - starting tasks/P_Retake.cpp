#include <iostream>

using namespace std;

int main()
{
  int a, b, c, n;

  cin >> a >> b >> c >> n;

  int f = n - (a + b - c);

   if (a > n || b > n || c > a || c > b || f < 1)
  {
    cout << -1;
  }else
  {
    cout << f;
  }
}