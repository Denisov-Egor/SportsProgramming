#include <iostream>

using namespace std;

int main()
{
  int n, a, b;
  int c = 0, m = 0;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    
    c -= a;
    c += b;
  
    if (c > m)
    {
      m = c;
    }
  }
  
  cout << m;
}