#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;

  cin >> s;

  string f = "aoyeui";

  for (int i = 0; i < s.size(); i++)
  {
    char c = tolower(s[i]);

    if (f.find(c) == string::npos)
    {
      cout << "." << c;
    }
  }
    
  cout << '\n';

}