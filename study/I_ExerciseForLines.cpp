#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string s;

  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    char c = tolower(s[i]);

    if (string("aoyeui").find(c) != string::npos)
    {
      continue;
    }
    cout << "." << c;
  }
  
}