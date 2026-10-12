#include <iostream>

using namespace std;

int main()
{
  int n;
  
  cin >> n;
  
  if (n % 2 != 0)
  {
    cout << "NO";
    return 0;
  }
  
  int arr[1000][5];
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int a = 0; a < 5; a++)
  { 
    for (int b = a + 1; b < 5; b++)
    {
      int onlyA = 0;
      int onlyB = 0;

      bool valid = true;

      for (int i = 0; i < n; i++)
      { 
        if (arr[i][a] == 1 && arr[i][b] == 0)
        {
          onlyA++;
        }else if (arr[i][a] == 0 && arr[i][b] == 1) 
        {
          onlyB++;
        }else if (arr[i][a] == 0 && arr[i][b] == 0)
        {
          valid = false;
        }       
        
      }

      if (valid && onlyA <= n / 2 && onlyB <= n / 2)
      {
        cout << "YES";
        return 0;
      }
      
    }

  }

  cout << "NO";
  
}