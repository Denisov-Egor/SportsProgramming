
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long a, b;
    cin >> a >> b;

    if (a - b != 1)
    {
      cout << "NO\n";
      continue;
    }

    long long n = a + b;
    bool f = true;

    if (n < 2)
    {
      f = false;
    }else
    {
      for (long long i = 2; i * i <= n; i++)
      {
        if (n % i == 0)
        {
          f = false;
          break;
        }
      }
    }

    if (f)
    {
      cout << "YES\n";
    }else
    {
        cout << "NO\n";
    }
  }
}
