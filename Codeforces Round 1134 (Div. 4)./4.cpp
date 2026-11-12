#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int ans = 0;
    
    for (int i = 0; i < n / 2; i++)
    {
      if (s[i] != s[n - 1 - i])
      {
        ans = max(ans, abs(s[i] - s[n - 1 - i]));
      }
    }
    
    cout << ans << '\n';
  }
}