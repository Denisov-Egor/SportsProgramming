#include <iostream>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, m, a;
    int s = 0;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
      std::cin >> a;
      s += a;
    }

    if (s > m)
    {
      s = m;
    }

    std::cout << s << '\n';
  }
}