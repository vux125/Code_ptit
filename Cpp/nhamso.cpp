#include <bits/stdc++.h>
using namespace std;

string a, b;

string Sum()
{
    while (a.size() > b.size())
        b = '0' + b;
    while (a.size() < b.size())
        a = '0' + a;

    int len = a.size();
    int nho = 0;
    string res;
    for (int i = len - 1; i >= 0; i--)
    {
        int so = int(a[i] - '0') + int(b[i] - '0') + nho;
        res = char(so % 10 + '0') + res;
        nho = so / 10;
    }
    if (nho > 0)
        res = char(nho + '0') + res;
    return res;
}

int main()
{
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '6')
            b[i] = '5';
    }
    cout << Sum() << " ";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
    }
    cout << Sum();
}