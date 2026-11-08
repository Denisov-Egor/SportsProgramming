#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  string res;

  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      res += '1';   
    }          
  }

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '2')
    {
      res += '2';   
    }          
  }

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '3')
    {
      res += '3';   
    }          
  }

  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i];

    if (i < res.size() - 1)
    {
      cout << '+';
    }
    
  }
  
}