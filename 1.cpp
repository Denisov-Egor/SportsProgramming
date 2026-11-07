#include <bits/stdc++.h>
#define int long long
#define double long double

using namespace std;

int power(int x, int n)
{
  int res = 1;
  int power = x;

  while (n)
  {
    if (n & 1)
    {
      res *= power;
    }

    power *= power;
    n >>= 1;
    
  }
  return res;
}

map<tuple<int, int>, int> remeber;

int power1(int x, int n)
{
  if (remeber.contains({x, n}))
  {
    return remeber[{x, n}];
  }
  
  if (n == 0)
  {
    return remeber[{x, n}] = 1;
  }

  if (n == 1)
  {
    return remeber[{x, n}] = x;
  }
  
  return remeber[{x, n}] = power(x, n >> 1) * power(x, n - (n >> 1));
}

// запоминаниея ответа дин проагрммирование 

array<int, 1'000'000> remember_fibonacci_num;

int fibonacci_num(int i)
{
  if (i <= 1)
  {
    return i;
  }
 
  return fibonacci_num(i - 1) + fibonacci_num(i - 2);
}

auto bacward_calc()
{
  constexpr int N(1'000'000);
  array<int, N> dp{};
  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i < N; ++i)
  {
    dp[i]  = dp[i - 1] + dp[i - 2];
  }
  
  return dp;
}

auto direct_calc()
{
  constexpr int N(1'000'000);
  array<int, N> dp{};
  dp[0] = 0;
  dp[1] = 1;

  for (int i = 0; i < N; ++i)
  {
    if (i + 1 < N)
    {
      dp[i + 1] += dp[i];
    }

    if (i + 2 < N)
    {
      dp[i + 2] += dp[i];
    }
  }
}

using mat2 = array<int, 4>;
using vec2 = array<int, 2>;

vec2 operator*(const vec2& x, const mat2& y)
{
  vec2 result{};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      result[i] += x[i] * y[i * 2 + j];
    }
  }
 
  return result;
}

mat2 operator*(const mat2& x, const mat2& y)
{
  mat2 result{};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        result[];
      }
      
    }
    
  }
  
}