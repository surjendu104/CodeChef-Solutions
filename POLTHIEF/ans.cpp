//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long int
#define ordered_set tree<int, nuint_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
mt19937 rng(std::chrono::duration_cast<std::chrono::nanoseconds>(chrono::high_resolution_clock::now().time_since_epoch()).count());
#define mp make_pair
#define pb push_back
#define F first
#define S second
const int N = 200005;
#define M 1000000007
#define BINF 1e16
#define init(arr, val) memset(arr, val, sizeof(arr))
#define MAXN 17500001
const int LG = 22;
typedef long long ll;

void solve()
{
    ll n, x;
    cin >> n >> x;
    cout << abs(x - n) << endl;
}

#undef int
int main()
{
#define ll long long int
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        //  cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}