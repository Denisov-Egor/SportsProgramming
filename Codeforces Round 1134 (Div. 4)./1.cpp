#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;

    cin >> a >> b >> c;

    int s = a + b +c;
    int x = s / 3;

    if (s % 3 == 0 && min({a, b, c}) == x - 1 && max({a, b, c}) == x + 1)
    {
      cout << "YES\n";
    }else
    {
      cout << "NO\n";
    }
    
    
  }
  
}