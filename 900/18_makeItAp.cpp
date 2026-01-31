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
         ll a, b, c;
         cin>>a>>b>>c;

         bool ans = false;
         ll new_a = 2*b - c;
         if(new_a /a > 0 && new_a%a == 0){
            ans = true;
         }

         ll new_b = (a+c)/2;
         if(new_b/b > 0 && new_b %b == 0 && (c-a)%2 == 0) ans = true;

         ll new_c = 2*b - a;
         if(new_c/c > 0 && new_c%c == 0)ans = true;

         if(ans){
            cout<<"yes"<<endl;
         }
         else cout<<"No"<<endl;
       }
 
return 0;
}