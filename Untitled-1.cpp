#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define mp make_pair
#define RFOR(i, a, n) for (int i = n; i > a; i--)
#define pii pair<long long int, long long int>
#define ub upper_bound
#define lb lower_bound
#define MOD 1000000007
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    ll a[t];
    for (ll i = 0; i < t; i++)
        cin >> a[i];
    for (ll i = t; i > 0; i--)
    {
        ll count = 0;
        ll c = 0;
        for (ll j = 0; (j + i) <= t; j++)
        {
            for (ll k = j; k < (j + i); k++)
            {
                if (a[k] == 0)
                    count++;
                else
                    count--;
            }
            if (count > 0)
            {
                c++;
                cout << i;
                break;
            }
        }
        if (c != 0)
            break;
    }
    return 0;
}