#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<LL> VLL;

#define si(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define sull(n) scanf("%llu", &n)
#define sortv(v) sort(v.begin(), v.end())
#define sz(v) v.size()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define f first
#define s second

int main()
{
	int n;
	si(n);
	vector<pair<int, int> > v(n);
	for (int i = 0; i < n; i++)
	{
		si(v[i].f);
		si(v[i].s);
	}
	sortv(v);
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (ans > v[i].s)
			ans = v[i].f;
		else
			ans = v[i].s;
	cout << ans << endl;
	return 0;
}
