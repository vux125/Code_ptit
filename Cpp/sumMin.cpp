#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
        	int a;
            cin >> a;
            if (a != 0)
            {
                b[j] = a;
                j++;
            }
        }
        sort(b, b + j);
        long long sum1 = 0;
        long long sum2 = 0;
        for (int i = 0; i < j; i+=2)
        {
            sum1 = sum1 * 10 + b[i];
        }
        for (int i = 1; i < j; i+=2)
        {
            sum2 = sum2 * 10 + b[i];
        }
        cout << sum1 + sum2 << endl;
    }
}
