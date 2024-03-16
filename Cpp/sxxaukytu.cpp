#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int D;
        cin >> D;
        string s;
        cin >> s;
        map<char, int> mp;
        int a[10000];
        int k = 0;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            a[k] = it.second;
            k++;
        }
        bool check = true;
        sort(a, a + k);
        if (len % 2 == 0)
        {
            if (a[k - 1] + (D - 1) * a[k - 1] > len)
            {
                cout << -1 << endl;
                check = false;
            }
        }
        else
        {
            if (a[k - 1] + (D - 1) * (a[k - 1] - 1) > len)
            {
                cout << -1 << endl;
                check = false;
            }
        }
        if (check)
            cout << 1 << endl;
    }
}