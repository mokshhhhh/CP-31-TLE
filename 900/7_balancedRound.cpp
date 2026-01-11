#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         long n, k;
         cin>>n>>k;

         vector<long> a(n);
         for(long i = 0; i < n; ++i){
            cin>>a[i];
         }

         sort(begin(a), end(a));
         int global = 0, curr = 0;
         for(int i = 1; i < n; ++i){
            if(a[i] - a[i-1] <= k)
            {
                curr++;
                global = max(global , curr);
            }
            else curr = 0;
         }

         cout<<n - global - 1<<endl;

       }
 
return 0;
}