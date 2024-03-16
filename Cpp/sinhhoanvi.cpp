#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;


int sinh()
{
    int t;
    vector<int> b;
    for (int i = n; i > 1; i--)
    {
        b.push_back(a[i]);
        if (a[i] > a[i - 1])
        {
            t = i;
            break;
        }
    }
    sort(b.begin(), b.end());
    int k;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] > a[t - 1])
        {
            k = a[t - 1];
            a[t - 1] = b[i];
            b[i] = k;
            break;
        }
    }
    sort(b.begin(), b.end());
    int j = 0;
    for (int i = t; i <= n; i++)
    {
        a[i] = b[j];
        j++;
    }
    t=0;
    for (int i = n; i > 1; i--)
    {
        if (a[i]> a[i - 1])
        {
            t = i;
            break;
        }
    }
    if (t == 0)
        return 0;
    else
        return 1;
}
bool chec(int b[])
{
	bool ktr = true;
    for (int i = 1; i <= n; i++)
    {
        if(a[i] != b[i]) return false; 
    }
    return true;
    
}

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        cin >> n;
        int arr[n+1];
        for(int i=1;i<=n;i++) {
        	cin >> arr[i];
		}
        if(n==1) {
        	cout << 1<<endl;
        	continue;
		}
		a.push_back(0);
        for(int i = 1; i <= n; i++){
		
        	a.push_back(i);	
		} 
        int check = 1;
        int dem=0;
        while (check)
        {
        	dem++;
        	if(chec(arr)) {
        		break;
			}
            check = sinh();
        }
        cout << dem<<endl;
        a.clear();
    }
}

