#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
long long poww(int a, int n)
{
    if (n == 0)
        return 1;
    long long x = poww(a, n / 2);
    if (n % 2 == 0)
        return ((x % MOD) * (x % MOD)) % MOD;
    return ((a % MOD) * ((x % MOD) * (x % MOD)) % MOD) % MOD;
}

void testCase()
{
    long long n, k;
    cin >> n >> k;
    cout << poww(n, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}