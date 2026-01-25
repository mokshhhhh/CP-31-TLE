#include<bits/stdc++.h>
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
 
bool compare(string &s1, string & s2){
    ll i = 0, j = 0;
    while(i < s1.size() && j < s2.size()){
        if(s1[i] - 'a' > s2[i] - 'a'){
            return false;
        }
        return true;
    }
}

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         ll n;
         cin>>n;

         
         vector<string> a(n);
         for0(i,n) cin>>a[i];

         string ans = "";
         ans += a[0];

         for1(i, n){
            if(compare(ans, a[i])){
                ans += a[i];
            }

            else{
                ans = a[i] + ans;
            }
         }
         
        cout<<ans<<endl;
       }
 
return 0;
}