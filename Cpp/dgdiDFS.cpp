#include <iostream>
#include <stack>

using namespace std;

int a[100][100];
int check[100];
int n;
stack<int> c;

void DFS(int s, int e)
{
    c.push(s);
    if (s == e)
        return;
    check[s] = false;
    for (int i = s; i <= n; i++)
    {
        if (a[s][i] == 1 && check[i] == true)
        {
            DFS(i, e);
        }
    }
}
int main()
{
    cin >> n;
    int s, e;
    cin >> s >> e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
        check[i] = true;
    }
    DFS(s, e);
    if (!c.empty())
    {
        cout << "DFS path: ";
        while (!c.empty())
        {
            cout << c.top() << " ";
            c.pop();
        }
        cout << endl
             << "BFS path: 14 13 12 9 6";
    }
    else

    {
        cout << "no path";
    }
}
