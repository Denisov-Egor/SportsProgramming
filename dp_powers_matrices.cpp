#include <bits/stdc++.h>
#define int long long
#define double long double

using namespace std;

template<typename T, typename R, R zero>
R power(R x, int n) {
    R result = zero;
    T power = x;
    while (n) {
        if (n & 1) {
            result *= power;
        }
        power *= power;
        n >>= 1;
    }
    return result;
}

map<tuple<int, int>, int> remember;

int power(int x, int n) {
    if (remember.contains({x, n})) return remember[{x, n}];
    if (n == 0) return remember[{x, n}] = 1;
    if (n == 1) return remember[{x, n}] = x;
    return remember[{x, n}] = power(x, n >> 1) * power(x, n - (n >> 1));
}

int fibonacci_num(int i) {
    if (i <= 1) return i;
    return fibonacci_num(i - 1) + fibonacci_num(i - 2);
}

array<int, 1'000'001> remember_fibonacci_num;
int fibonacci_num_fast(int i) {
    if (i <= 1) return i;
    if (remember_fibonacci_num[i] != 0) return remember_fibonacci_num[i];
    return remember_fibonacci_num = fibonacci_num_fast(i - 1) 
                                    + fibonacci_num_fast(i - 2);
}
auto backward_calc() {
    constexpr int N{1'000'001};
    array<int, N> dp{};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < N; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp;
}

auto direct_calc() {
    constexpr int N{1'000'001};
    array<int, N> dp{};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 0; i < N; ++i) {
        if (i + 1 < N) dp[i + 1] += dp[i];
        if (i + 2 < N) dp[i + 2] += dp[i];
    }
    return dp;
}

using mat2 = array<array<int, 2>, 2>;
using vec2 = array<int, 2>;

vec2 operator*(const vec2& x, const mat2& y) {
    vec2 result{};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i] += x[i] * y[j][i];
        }
    }
    return result;
}

mat2 operator*(const mat2& x, const mat2&y) {
    mat2 result{};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += result[i][k] * result[k][j];
            }
        }
    }
    return result;
}

constexpr vec2 fibb_zero{{1, 0}};
constexpr mat2 mat_zero{{1,0}, {0,1}};

int main () {
    mat2 fibb_transform{{1, 1}, {1, 0}};
    int n;
    cin >> n;
    vec2 fibb_i{power<mat2, vec2, fibb_zero>(fibb_transform, n)};
    cout << fibb_i.back();
}