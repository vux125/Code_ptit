#include <iostream>
#include <algorithm>
using namespace std;
long long mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long maxx = 0;
        for (int i = 0; i < n; i++)
        {
            maxx = (maxx % mod + (a[i] * i) % mod) % mod;
        }
        cout << maxx << endl;
    }
}