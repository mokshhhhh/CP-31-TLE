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

         string s;
         cin>>s;

         if(n <= 2){
          cout<<1<<endl; continue;
         }

         if(s[0] == '0' && s[1] == '0') s[1] = '1';
         if(s[n-1] == '0' && s[n-2] == '0') s[n-2] = '1';

         int cnt = 0, prev = -1;
         for0(i,n){
          if(s[i] != '1'){
            if(i - prev >= 3) {
              cnt++;
              s[i] = '1';
              prev = i;
            }
          }
          else{
            cnt++;
            prev = i;
          }
         }

         cout<<cnt<<endl;
         
       }
 
return 0;
}