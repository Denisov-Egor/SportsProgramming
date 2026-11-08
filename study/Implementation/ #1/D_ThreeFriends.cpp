#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  int a, b, c;

  cin >> t;

  while (t--)
  {
    cin >> a >> b >> c;

    int f = max({a, b, c}) - min({a, b, c}) - 2;

    if (f < 0)
    {
      f = 0;
    }
    
    f*= 2;

    cout << f << '\n';
  }
  
}