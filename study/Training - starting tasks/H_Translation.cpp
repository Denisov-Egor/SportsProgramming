#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, t;
  bool f = true;

  cin >> s >> t;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != t[t.size() - 1 - i])
    {
      f = false;
    }
  }

  if (f)
  {
    cout << "YES";
  }else
  {
    cout << "NO";
  }
  
  
}