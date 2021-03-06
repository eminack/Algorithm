#include <bits/stdc++.h>

using namespace std;

typedef long long 				LL;
typedef unsigned long long 		ULL;
typedef vector<int> 			VI;
typedef vector<LL> 				VLL;
typedef pair<int, int> 			PII;
typedef pair<LL, LL> 			PLL;

#define si(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define sull(n) scanf("%llu", &n)
#define sortv(v) sort(v.begin(), v.end())
#define each(it, v) for(__typeof(v.begin()) it(v.begin()); it != v.end(); it++)
#define sz(v) v.size()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define f first
#define s second

int main()
{
	int n, k;
	cin >> n >> k;
	vector<PLL> v(n);
	for (int i = 0; i < n; i++)
	{
		sll(v[i].f);
		v[i].s = i + 1;
	}
	sortv(v);
	LL sum = 0;
	VLL ans;
	for (int i = 0; i < n; i++)
	{
		sum += v[i].f;
		if (sum <= k)
			ans.pb(v[i].s);
		else
			break;
	}
	cout << ans.size() << endl;
	for (int i = 0; i < (int) ans.size(); i++)
		cout << ans[i] << ' ';
	cout << endl;
	return 0;
}
