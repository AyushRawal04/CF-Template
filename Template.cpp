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
const ll maxll = LLONG_MAX;
const ll minll = LLONG_MIN;
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
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
// pairs
#define mp(a, b) make_pair(a, b)
#define ff first
#define ss second
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<char, char> pc;

//*******************************************************************************************************************************************//
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return;
}
//*******************************************************************************************************************************************//
#ifndef ONLINE_JUDGE
#ifndef DEBUG_TEMPLATE_CPP
#define DEBUG_TEMPLATE_CPP
#include <bits/stdc++.h>
// #define cerr cout
namespace __DEBUG_UTIL__
{
    using namespace std;
    /* Primitive Datatypes Print */
    void print(const char *x) { cerr << x; }
    void print(bool x) { cerr << (x ? "T" : "F"); }
    void print(char x) { cerr << '\'' << x << '\''; }
    void print(signed short int x) { cerr << x; }
    void print(unsigned short int x) { cerr << x; }
    void print(signed int x) { cerr << x; }
    void print(unsigned int x) { cerr << x; }
    void print(signed long int x) { cerr << x; }
    void print(unsigned long int x) { cerr << x; }
    void print(signed long long int x) { cerr << x; }
    void print(unsigned long long int x) { cerr << x; }
    void print(float x) { cerr << x; }
    void print(double x) { cerr << x; }
    void print(long double x) { cerr << x; }
    void print(string x) { cerr << '\"' << x << '\"'; }
    template <size_t N>
    void print(bitset<N> x) { cerr << x; }
    void print(vector<bool> v)
    { /* Overloaded this because stl optimizes vector<bool> by using
          _Bit_reference instead of bool to conserve space. */
        int f = 0;
        cerr << '{';
        for (auto &&i : v)
            cerr << (f++ ? "," : "") << (i ? "T" : "F");
        cerr << "}";
    }
    /* Templates Declarations to support nested datatypes */
    template <typename T>
    void print(T &&x);
    template <typename T>
    void print(vector<vector<T>> mat);
    template <typename T, size_t N, size_t M>
    void print(T (&mat)[N][M]);
    template <typename F, typename S>
    void print(pair<F, S> x);
    template <typename T, size_t N>
    struct Tuple;
    template <typename T>
    struct Tuple<T, 1>;
    template <typename... Args>
    void print(tuple<Args...> t);
    template <typename... T>
    void print(priority_queue<T...> pq);
    template <typename T>
    void print(stack<T> st);
    template <typename T>
    void print(queue<T> q);
    /* Template Datatypes Definitions */
    template <typename T>
    void print(T &&x)
    {
        /*  This works for every container that supports range-based loop
            i.e. vector, set, map, oset, omap, dequeue */
        int f = 0;
        cerr << '{';
        for (auto &&i : x)
            cerr << (f++ ? "," : ""), print(i);
        cerr << "}";
    }
    template <typename T>
    void print(vector<vector<T>> mat)
    {
        int f = 0;
        cerr << "\n~~~~~\n";
        for (auto &&i : mat)
        {
            cerr << setw(2) << left << f++, print(i), cerr << "\n";
        }
        cerr << "~~~~~\n";
    }
    template <typename T, size_t N, size_t M>
    void print(T (&mat)[N][M])
    {
        int f = 0;
        cerr << "\n~~~~~\n";
        for (auto &&i : mat)
        {
            cerr << setw(2) << left << f++, print(i), cerr << "\n";
        }
        cerr << "~~~~~\n";
    }
    template <typename F, typename S>
    void print(pair<F, S> x)
    {
        cerr << '(';
        print(x.first);
        cerr << ',';
        print(x.second);
        cerr << ')';
    }
    template <typename T, size_t N>
    struct Tuple
    {
        static void printTuple(T t)
        {
            Tuple<T, N - 1>::printTuple(t);
            cerr << ",", print(get<N - 1>(t));
        }
    };
    template <typename T>
    struct Tuple<T, 1>
    {
        static void printTuple(T t) { print(get<0>(t)); }
    };
    template <typename... Args>
    void print(tuple<Args...> t)
    {
        cerr << "(";
        Tuple<decltype(t), sizeof...(Args)>::printTuple(t);
        cerr << ")";
    }
    template <typename... T>
    void print(priority_queue<T...> pq)
    {
        int f = 0;
        cerr << '{';
        while (!pq.empty())
            cerr << (f++ ? "," : ""), print(pq.top()), pq.pop();
        cerr << "}";
    }
    template <typename T>
    void print(stack<T> st)
    {
        int f = 0;
        cerr << '{';
        while (!st.empty())
            cerr << (f++ ? "," : ""), print(st.top()), st.pop();
        cerr << "}";
    }
    template <typename T>
    void print(queue<T> q)
    {
        int f = 0;
        cerr << '{';
        while (!q.empty())
            cerr << (f++ ? "," : ""), print(q.front()), q.pop();
        cerr << "}";
    }
    /* Printer functions */
    void printer(const char *) {} /* Base Recursive */
    template <typename T, typename... V>
    void printer(const char *names, T &&head, V &&...tail)
    {
        /* Using && to capture both lvalues and rvalues */
        int i = 0;
        for (size_t bracket = 0; names[i] != '\0' and (names[i] != ',' or bracket != 0); i++)
            if (names[i] == '(' or names[i] == '<' or names[i] == '{')
                bracket++;
            else if (names[i] == ')' or names[i] == '>' or names[i] == '}')
                bracket--;
        cerr.write(names, i) << " = ";
        print(head);
        if (sizeof...(tail))
            cerr << " ||", printer(names + i + 1, tail...);
        else
            cerr << "]\n";
    }
    /* PrinterArr */
    void printerArr(const char *) {} /* Base Recursive */
    template <typename T, typename... V>
    void printerArr(const char *names, T arr[], size_t N, V... tail)
    {
        size_t ind = 0;
        for (; names[ind] and names[ind] != ','; ind++)
            cerr << names[ind];
        for (ind++; names[ind] and names[ind] != ','; ind++)
            ;
        cerr << " = {";
        for (size_t i = 0; i < N; i++)
            cerr << (i ? "," : ""), print(arr[i]);
        cerr << "}";
        if (sizeof...(tail))
            cerr << " ||", printerArr(names + ind + 1, tail...);
        else
            cerr << "]\n";
    }
}
#ifndef ONLINE_JUDGE
#define debug(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#define debugArr(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printerArr(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#define debugArr(...)
#endif
#endif
#endif
//*******************************************************************************************************************************************//

// Segment Tree template

template<typename Node, typename Update>
struct SegTree {
	vector<Node> tree;
	vector<ll> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<ll> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
			s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
		if (start == end)	{
			tree[index] = Node(arr[start]);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
		if (start == end) {
			u.apply(tree[index]);
			return;
		}
		int mid = (start + end) / 2;
		if (mid >= query_index)
			update(start, mid, 2 * index, query_index, u);
		else
			update(mid + 1, end, 2 * index + 1, query_index, u);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
			return Node();
		if (start >= left && end <= right)
			return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, ll val) {  // pass in as many parameters as required
		Update new_update = Update(val); // may change
		update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
		return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
	ll val; // may change
	Node1() { // Identity element
		val = 0;	// may change
	}
	Node1(ll p1) {  // Actual Node
		val = p1; // may change
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = l.val + r.val;  // may change
	}
};

struct Update1 {
	ll val; // may change
	Update1(ll p1) { // Actual Update
		val = p1; // may change
	}
	void apply(Node1 &a) { // apply update to given node
		a.val = val; // may change
	}
};


//*******************************************************************************************************************************************//
// parent, rank
vector<int> pDSU, rDSU;

//initialise the parent and rank array
void initialiseDSU(int n){
	pDSU.resize(n);
	rDSU.resize(n);
	iota(pDSU.begin(), pDSU.end(), 0);
}

// gets the leader for you
int getDSU(int a)
{
	//without path compression
    return (pDSU[a] == a ? a : getDSU(pDSU[a]));
}

void uniteDSU(int a, int b)
{
    // find the leader
    a = getDSU(a);
    b = getDSU(b);

    // update the rank
    if (rDSU[a] == rDSU[b])
        rDSU[a]++;

    // update the parent
    if (rDSU[a] > rDSU[b])
        pDSU[b] = a;
    else
        pDSU[a] = b;
}
//*******************************************************************************************************************************************//

//One easy way to normalize an array is to first create a copy of it. 
//Let 'v' be the array to be normalized and 'aux' its duplicate.
//Then, sort the copy and erase the dublicates.
//Thus, 'aux' contains all the distinct elements in 'v'.
//Now, we simply have to find for each element in 'v' its position in 'aux'. 
//This can be easily done using binary search or the STL-provided lower_bound function.
void normalize(vector<int> &v) {
  	vector<int> aux = v;
  	sort(aux.begin(), aux.end());
  	aux.erase(unique(aux.begin(), aux.end()), aux.end());
  	for(int i = 0; i < (int)v.size(); i++)
    		v[i] = lower_bound(aux.begin(), aux.end(), v[i]) - aux.begin() + 1;
}

//Linear sieve calculates prime and spf
//Try most times only upto 1e7
//Prime Check spf[i]==i
vector<int> spf;
vector<int> pr;

void initialiseSieve(int n){
        spf.resize(n+1);
}
void Linearsieve(){
        int n=sz(spf)-1;
        for (int i=2; i<=n; ++i) {
        if (spf[i]==0){
                spf[i]=i;
                pr.push_back(i);
        }
                for(int j=0; i*pr[j]<=n; ++j){
                        spf[i*pr[j]]=pr[j];
                        if (pr[j]==spf[i]){
                                break;
                        }
                }
        }
}

ll c2(int n)
{
	return 1LL * n * (n - 1) / 2;
}
ll c2mod(int n, int m)
{
	n %= m;
	return 1LL * n * (n - 1) / 2 % m;
}
vi dig(int n){
	int y=n;
	vi res;
	while(y){
		res.push_back(y%10);
		y/=10;
	}
	return res;
}
vi digll(ll n){
	ll y=n;
	vi res;
	while(y){
		res.push_back(y%10);
		y/=10;
	}
	return res;
}
/*********************************************************
 *                                                       *
 *   "It is not important to be better than someone      *
 *   else, but to be better than you were yesterday.”    *
 *                   — Master Oogway, Kung Fu Panda      *
 *                                                       *
 *********************************************************/
void solve(){

}

int main()
{
//freopen("Input File", "r", stdin);
//freopen("Output File", "w", stdout);
fastio();
	int tc;
	cin >> tc;
	while (tc--)
	{
		solve();
	}

    	return 0;
}
