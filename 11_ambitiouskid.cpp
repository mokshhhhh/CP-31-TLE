#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }

        int ans = INT_MAX;
        for(int i = 0; i < n; ++i){
            if(abs(a[i]) < ans) ans = abs(a[i]);
        }

        cout<<ans<<endl;

      
return 0;
}