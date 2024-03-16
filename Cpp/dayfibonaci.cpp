#include <iostream>
#define ll long long
using namespace std;

ll a[100];
string xau = "AB";
void Try()
{
	a[0] = 0;
    a[1] = 1;
    for(int i=2;i<=92;i++){
    	a[i] = a[i - 2] + a[i - 1];	
	}
}
void find(int n, int k)
{
    if (n == 1 || n == 2)
    {
        cout << xau[n - 1] << endl;
        return;
    }
    if (k > a[n - 2])
    {
        find(n - 1, k - a[n - 2]);
    }
    else
    {
        find(n - 2, k);
    }
}
int main()
{

    long long t;
    cin >> t;
    Try();
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        while (cin >> k)
        {
            if (k >= 1 && k <= a[n])
            {
                break;
            }
        }
        find(n, k);
    }
}
