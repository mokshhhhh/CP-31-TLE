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
 
ll bestEle(vector<ll>& a, ll n){

    unordered_map<ll, ll> mpp;
    for0(i,n){
        mpp[a[i]]++;
    }

    ll ans = 0;
    for(auto &f : mpp){
        ans = max(ans, f.second);
    }

    return ans;
}

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         ll n;
         cin>>n;

         vector<ll> a(n);
         for0(i,n) cin>>a[i];

         ll curr_max = bestEle(a, n);
         if(curr_max == n) {
            cout<<0<<endl;
            continue;
         }

         ll op = 0;

         while(curr_max < n){
            op += 1; //copy arr
            if(curr_max*2 <= n){    
                op += curr_max;
                curr_max += curr_max;
            }
            else{
                op += n - curr_max;
                curr_max = n;
            }
         }

         cout<<op<<endl;

       }
 
return 0;
} 