#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, a, b, c, n;
  cin >> t;

  while (t--)
  {
    cin >> a >> b >> c >> n;

    int s = a + b + c + n;

    if (s % 3 == 0 && s / 3 >= max({a, b, c}))
    {
      cout << "YES\n";
    }else
    {
      cout << "NO\n";
    }    
  }
  
}