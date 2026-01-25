#include <bits/stdc++.h>
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)

#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;
typedef long long ll;

bool comp(ll a, ll b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for0(i, n) cin >> a[i];

        vector<ll> og = a;
        sort(a.begin(), a.end(), comp);

        ll l = 0, r = 0;
        ll ele;
        bool yes = false;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != og[i])
            {
                ele = a[i]; // 1st greatest ele not in positition
                l = i; // left most
                yes = true;
                break;
            }
        }
//ccout<<"l : "<<l<<endl;
        if (yes)
        {
            for0(i, n)
            {
                if (og[i] == ele)
                    r = i;
            }

            //cout<<"l :"<<l<<"r :"<<r<<endl;
            reverse(og.begin() + l, og.begin() + r + 1);
        }

        for0(i, n) cout << og[i] << " ";
        cout << endl;
    }

    return 0;
}