
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#define _USE_MATH_DEFINES
#include <cmath>
#include <map>
#include <queue>
#include <deque>
#include <functional>
#include <algorithm>
#include <cassert>
#include <utility>
#include <stack>
#include <cstdlib>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <climits>
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

int main()
{
    int n;
    cin >> n;
    if (n % 4)
    {
        printf("===\n");
        return 0;
    }
    string s;
    cin >> s;
    unordered_map<char, int> u;
    u['A'] = u['G'] = u['C'] = u['T'] = 0;
    for (auto &c: s)
        if (c != '?')
            u[c]++;
    for (auto &v: u)
        if (v.second > n / 4)
        {
            printf("===\n");
            return 0;
        }
    auto it = u.begin();
    for (auto &c: s)
        if (c == '?')
        {
            while ((*it).second == n / 4) it++;
            c = (*it).first;
            (*it).second++;
        }
    cout << s << endl;
    return 0;
}
