#include <bits/stdc++.h>
using namespace std;

/******************************* Macros **********************************/

#define F first;
#define S second;
#define mp make_pair
#define pb push_back
#define INF 1000000000000000005ll;
#define PI 3.1415926535897932384626433832795
#define MOD1 1000000007
#define endl "\n"


/******************************* Type Definitions **********************************/

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef map<ll, ll> mapll;
typedef set<ll> setll;
typedef multiset<ll> msetll;
typedef pair<string, string> pss;

/******************************* Function Declarations **********************************/

bool isPowerOfTwo(ll);
bool isPrime(ll);
void swapNum(ll, ll);
ll numOfDigits(ll);

/******************************* Solve Cases **********************************/
void solve()
{
    // Your Code Here ;)
}

/******************************* Start of Main **********************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/******************************* End of Main Function **********************************/

/******************************* Function Definitions **********************************/


bool isPrime(ll n)
{
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i += 2)
    {
        if (n % 2 == 0)
            return true;
        if (i == 2)
            ++i;
        else
            i += 2;
    }
    return false;
}

bool isPowerOfTwo(int x)
{
    return x && (!(x & (x - 1)));
}

void swapNum(ll &a, ll &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

ll numOfDigits(ll N)
{
    return (floor(log10(N)) + 1);
}
