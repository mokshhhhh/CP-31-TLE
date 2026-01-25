#include <bits/stdc++.h>
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i < (int)(n); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)

#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for0(i, n) cin >> a[i];

        vector<ll> b(n);
        for0(i, n) cin >> b[i];

        a[n - 1] = max(a[n - 1], b[n - 1]);

        for (int i = n - 2; i >= 0; --i)
        {
            b[i] = max(b[i], b[i + 1]);
        }

        for(int i = n - 2; i >= 0; --i){
            a[i] = max(a[i], max(a[i + 1], b[i]));
        }

        vector<ll> sum(n);
        sum[0] = a[0];

        for1(i, n){
            sum[i] = sum[i-1] + a[i];
            
        }


        while (q--)
        {
            ll l, r;
            cin >> l >> r;

            if(l == 1){
                cout<<sum[r-1]<<" ";
            }
            else cout<<sum[r-1] - sum[l-2]<<" ";
            
        }
        cout << endl;
    }

    return 0;
}