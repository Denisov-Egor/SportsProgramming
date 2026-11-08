#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string s;

  cin >> n;

  while (n--)
  {
    cin >> s;

    if (s.size() > 10)
    {
      cout << s[0];
      int size = s.size() - 2;
      cout << size;
      cout << s[s.size() - 1];
    }else
    {
      cout << s;
    }

    cout << '\n';
  }
  
}