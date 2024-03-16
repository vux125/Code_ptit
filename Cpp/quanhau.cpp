#include <iostream>

using namespace std;

int n;
int a[100];
bool cheo1[100], cheo2[100], doc[100];
int dem = 0;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] && cheo1[i - j + n] && cheo2[i + j - 1])
        {
            a[j] = cheo1[i - j + n] = cheo2[i + j - 1] = false;
            if (i == n)
                dem++;
            else
                Try(i + 1);
            a[j] = cheo1[i - j + n] = cheo2[i + j - 1] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            a[i] = true;
        }
        for (int i = 0; i <= 2 * n; i++)
        {
            cheo1[i] = cheo2[i] = true;
        }
        Try(1);
        cout << dem << endl;
        dem = 0;
    }
}
