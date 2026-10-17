#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  string s;
  int cA = 0, cD = 0;

  cin >> n;
  cin >> s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'A')
    {
      cA++;    
    }else if (s[i] == 'D')
    {
      cD++;
    }   
  }

  if (cA > cD)
  {
    cout << "Anton";
  }else if (cD > cA)
  {
    cout << "Danik";
  }else if (cA == cD)
  {
    cout << "Friendship";
  }  
  
}