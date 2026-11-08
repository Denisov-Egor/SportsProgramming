#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t, a, b, c;

  cin >> t;

  while (t--)  
  {
    cin >> a >> b >> c;
    
    int ans = 0;

    for (int mask = 0; mask < 128; mask++)
    { 
      int x = 0, y = 0, z = 0, cnt = 0;

      for (int i = 0; i <= 7; i++)
      {
        if (mask & (1 << (i - 1)))
        {
          cnt++;

          if (i & 1) x++;
          if (i & 2) y++;
          if (i & 4) z++;
        }
      }
      
      if (x <= a && y <= b && z <= c)
        ans = max(ans, cnt);
    }

    std::cout << ans << '\n';
  }
}