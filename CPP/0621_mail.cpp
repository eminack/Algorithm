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
	int n;
	cin >> n;
	VI v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int ans = 1;
	VI unread;
	for (int i = 0; i < n; i++)
		if (v[i])
			unread.pb(i);
	if (unread.size() == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i < unread.size(); i++)
		ans += min(unread[i] - unread[i - 1], 2);
	cout << ans << endl;
	return 0;
}
