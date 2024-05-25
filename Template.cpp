/*********************************************************
 *                                                       *
 *   "It is not important to be better than someone      *
 *   else, but to be better than you were yesterday.”    *
 *                   — Master Oogway, Kung Fu Panda      *
 *                                                       *
 *********************************************************/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 

#define rep(i, j, n) for (int i = j; i < n; i++)
#define re(i, n) rep(i, 0, n)
#define nl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef long double lld;

const int MOD = 1000000007;
const int maxi = INT_MAX;
const int mini = INT_MIN;
const ll maxll = LONG_LONG_MAX;
const ll minll = LONG_LONG_MIN;
#define sq(x) ((x) * (x))
// vectors
#define pb(e) push_back(e)
#define eb(e) emplace_back(e)
#define sv(a) sort(a.begin(), a.end())
#define sa(a, n) sort(a, a + n)
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
typedef vector<int> vi;
typedef vector<ll> vll;
// pairs
#define mp(a, b) make_pair(a, b)
#define ff first
#define ss second
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<char, char> pc;

//*******************************************************************************************************************************************//
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
//*******************************************************************************************************************************************//

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
    }

    return 0;
}
