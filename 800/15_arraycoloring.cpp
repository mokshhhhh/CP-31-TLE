#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
        int n ;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }

        long long sum = accumulate(a.begin(), a.end(), 0);
        // int neven = 0, nodd = 0;
        // for(int i = 0; i < n ; ++i){
        //     if(a[i] %2 == 0) neven++;
        //     else nodd++;
        // }

        if(sum % 2 == 0){
            cout<<"Yes"<<endl;
            
        }
        else cout<<"No"<<endl;
      }
return 0;
}