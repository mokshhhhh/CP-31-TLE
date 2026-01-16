#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         long long n, q;
         cin>>n>>q;
         vector<long long> a(n);
         for(int i = 0; i < n; ++i) cin>>a[i];

         vector<int> pref(n + 1);
         //pref[0] = a[0];
         for(int i = 1; i <= n; ++i) pref[i] = pref[i - 1] + a[i-1];

         while(q--){
            long long l, r, k;
            cin>>l>>r>>k;

            long long tempsum = pref[r] - pref[l-1];
            long long temp = (r-  l + 1)*k;

            long long rem = pref[n-1] - tempsum + temp;
            if(rem % 2 == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

         }

       }
 
return 0;
}