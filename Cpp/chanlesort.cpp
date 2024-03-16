#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n];
		for(auto &it : a)
		{
			cin >> it;
		}
		for(auto &it : a)
		{
			it = pow(it , 2);
		}
		set<ll> mp;
		for(auto it : a)
		{
			for(ll i = 0 ; i < n ; i++)
			{
				ll ok = it + a[i];
				mp.insert(ok);
			}
		}
		int check = 1;
		for(auto it : a)
		{
			if(mp.find(it) != mp.end())
			{
				cout << "YES\n";
				check = 0;
				break;
			}
		}
		if(check)
		{
			cout << "NO\n";
		}
	}
}
