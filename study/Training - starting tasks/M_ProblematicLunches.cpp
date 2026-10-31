#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int f, k, t, n;

  cin >> n >> k;

  int m = -2000000000;

  for (int i = 0; i < n; i++)
  {
    cin >> f >> t;

    if (t > k)
    {
      f -= t - k;
    }
    
    m = max(m, f);
  }

  cout << m;
  
}