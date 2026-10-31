#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  
  bool found = false;
  
  cin >> s;

  int count = 1;

  for (size_t i = 1; i < s.size(); i++)
  {
    if (s[i] == s[i - 1])
    {
      count++;
    }else
    {
      count = 1;
    }
    
    if (count >= 7)
    {
      found = true;
      break;
    }
    
  }

  if (found)
  {
    cout << "YES";
  }else
  {
    cout << "NO";
  }
  
  
  
}