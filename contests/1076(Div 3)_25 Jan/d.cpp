#include<bits/stdc++.h>
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
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         ll n;
         cin>>n;

         vector<ll> a(n);
         for(auto &x : a) cin>>x;
         sort(a.begin(), a.end());

         vector<ll> b(n);
         for(auto &x : b) cin>>x;

         for(ll l = 1; l < n; l++){
            b[l] += b[l-1];
         }


         ll j = -1;
         ll ans = 0;
         for(ll i = 0; i < n; ++i){
            ll cnt = n - i;
            while(j < n-1 && b[j+1] <= cnt) j++;
            while(j >= 0 && b[j] > cnt) j--; 
            ans = max(ans, a[i] * (j + 1));
         }
         cout<<ans<<endl;
       }
 
return 0;
}