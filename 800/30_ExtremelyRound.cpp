#include<bits/stdc++.h>
using namespace std;
 

bool isValid(long long n){
    long long digitsCnt = 0 , zeroCnt = 0;
    while(n){
        if(n % 10 == 0) zeroCnt++;
        digitsCnt++;
        n /= 10;
    }

    if(zeroCnt + 1 == digitsCnt) return true;
}

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      vector<long long> a(999999);
      for(int i = 1; i <= 999999; ++i){
        if(isValid(i)) a.push_back(i);
      }

      while(t--){
         long n;
         cin>>n;

         long long ans = 0;

         for(int i = 0; i <= a.size(); ++i){
            if(a[i] <= n) ans++;
            else break;
         }

         cout<<ans<<endl;

       }
 
return 0;
}