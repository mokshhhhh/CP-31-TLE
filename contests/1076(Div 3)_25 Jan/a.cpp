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
         ll n, s, x;
         cin>>n>>s>>x;

         vector<ll> a(n);
         for0(i, n) cin>>a[i];
         ll sum = accumulate(a.begin(), a.end(), 0);

         if(sum > s) {
            cout<<"No"<<endl;
            continue;
         }

         ll rem = s - sum;
         if(rem % x == 0){
            cout<<"Yes"<<endl;
         }
         else cout<<"No"<<endl;

       }
 
return 0;
}