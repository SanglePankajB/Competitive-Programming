#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ull unsigned long long
#define REP(i, k, n) for (i = k; i < n; ++i)
#define REPI(i, a, b) for (i = a; i >= b; --i)
#define vstr vector<string>
#define vll vector<ll>
#define vb vector<bool>
#define pll pair<ll, ll>
#define F first
#define S second
#define el "\n"
#define sz(x) (ll) x.size()
#define ld long double
#define sortar(v) sort(v.begin(), v.end())
#define all(x) x.begin(), x.end()
#define div 1000000007
#define div2 998244353
#define pi 3.14159265358979323846
#define inf 1000000000000000000
#define blk 455
#define print(x)          \
    for (auto p : x)      \
    {                     \
        cout << p << ' '; \
    }                     \
    cout << el;
#define pb push_back
#define ppb pop_back

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << el;
#define _print(x)         \
    cerr << #x << el;     \
    for (auto p : x)      \
    {                     \
        cerr << p << " "; \
    }                     \
    cerr << el;
#else
#define debug(x)
#define _print(x)
#endif

#define N 1000005
bool isPrime[N] = {false};
vll prm;
vll SPF(N);

void sieve()
{
    isPrime[1] = isPrime[0] = 0;
    ll i;

    for (i = 2; i < N; ++i)
        isPrime[i] = 1;

    for (i = 2; i * i < N; ++i)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < N; j += i)
                isPrime[j] = 0;
        }
    }

    if (!prm.empty())
        prm.clear();

    REP(i, 2, N)
    {
        if (isPrime[i])
            prm.pb(i);
    }
}

ll fastPower(ll a, ll b, bool mod = false)
{
    if (b == 0)
        return 1LL;
    ll prod = 1LL;
    while (b > 0)
    {
        if (b & 1)
            prod = ((mod) ? ((prod % div * a % div) % div) : (prod * a));
        b = b >> 1;
        a = ((mod) ? (a % div * a % div) : (a * a));
    }
    return prod;
}

ll fact(ll n, bool mod = false)
{
    ll res = 1LL;
    for (ll i = 2; i <= n; i++)
    {
        res = ((mod) ? ((res % div * i % div) % div) : (res * i));
    }
    return res;
}

ll nCr(ll n, ll r)
{
    return (ld)fact(n) / (ld)(fact(r) * fact(n - r));
}

void printa(bool f)
{
    cout << ((f) ? "YES" : "NO") << el;
}

ll getMsb(ll n)
{
    ll pos = 0, res = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            res = pos;
        }
        ++pos;
        n >>= 1;
    }
    return res;
}

ll getsum(ll n)
{
    return (n * (n + 1)) / 2;
}

ll ds(ll n) {
    ll res = 0;
    while(n) {
        res += n%10;
        n /= 10;
    }
    return res;
}

void solve()
{

    ll n;
    cin >> n;
    vll a(n);
    map<ll, ll> fr;
    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
        ++fr[a[i]];
    }

    
    ll odd = 0, even = 0;
    for(auto &p:fr) {
        odd += (p.second & 1);
        even += (!(p.second & 1)?p.second:p.second-1);
    }

    ll res = 0;
    even += 2*odd;
    res += odd;

    res += even % 4;

    cout<<res<<el;

}

int main()
{

    IOS

        // sieve();
    int tc = 1;
    cin >> tc;
    for (ll t = 1; t <= tc; ++t)
    {
        debug(t);
        solve();
    }
    return 0;
}