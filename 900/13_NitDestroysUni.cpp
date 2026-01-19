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
         
         vi a(n);
         for0(i,n) cin>>a[i];

        ll no_of_zeroes = count(all(a), 0);
        bool bwZero = false;
        
        ll l = 0, r = n - 1;
        while(a[l] == 0) l++;
        while(a[r] == 0) r--;

        for(int i = l; i <= r; ++i){
            if(a[i] == 0) {
                bwZero = true;
                break;
            }
            
        }

        if(no_of_zeroes == a.size()) cout<<0<<endl;
        else if (bwZero == false) cout<<1<<endl;
        else cout<<2<<endl;

       }
 
return 0;
}