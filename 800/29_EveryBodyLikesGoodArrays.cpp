#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         long n;
         cin>>n;

         vector<long long> a(n);
         for(int i = 0; i < n; ++i){
            cin>>a[i];
         }

         int i = 1;
         int ans = 0;
         while(i < n){
            

            if((a[i - 1]%2 == 1 && a[i] %2 == 1) || (a[i-1] %2 == 0 && a[i]%2 == 0) ) ans++;
            i++;
         }

         cout<<ans<<endl;
       }
 
return 0;
}