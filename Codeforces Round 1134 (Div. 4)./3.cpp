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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] < a[i + 1])
      {
         ans.push_back(a[i]);
      }
    }

    ans.push_back(a[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
      if (a[i] == a[i + 1])
      {
        ans.push_back(a[i]);
      }
    }

    cout << ans.size() << '\n';

    for (int x : ans)
    {
      cout << x << ' ';
    }
    
    cout << '\n';
  }
}