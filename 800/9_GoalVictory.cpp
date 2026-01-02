#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){

        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }
            
        int plus = 0,minus = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] > 0) plus++;
            else minus++;
        }

        int ans = accumulate(a.begin() , a.end() , 0);
        if(plus > minus) ans = -ans;
        
        cout<<ans<<endl;

      }
return 0;
}