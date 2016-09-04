
#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename __Tp1>
void __f(const char* name, __Tp1&& __tp1){
    cerr << name << " : " << __tp1 << std::endl;
}
template <typename __Tp1, typename... __Tps>
void __f(const char* names, __Tp1&& __tp1, __Tps&&... __tps){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " <<  __tp1 << " | " ;
    __f(comma+1, __tps...);
}
#else
#define trace(...)
#endif

int f(int a, int b)
{
    if (a < b) swap(a, b);
    return min(a - b, 10 - a + b);
}

int main()
{
    vector<int> v(5), u(5);
    for (auto &vv: v) cin >> vv;
    for (auto &uu: u) cin >> uu;
    int ans = 0;
    for (int i = 0; i < 5; i++)
        ans += f(v[i], u[i]);
    cout << ans;
    return 0;
}
