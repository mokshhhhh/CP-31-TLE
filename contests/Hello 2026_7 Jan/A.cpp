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

         vector<int> a(n);

         for(int i = 0; i < n; ++i){
            cin>>a[i];
         }

         if(a[0] == 0 && a[n-1] == 0) {
            cout<<"Bob"<<endl;
         }
         else cout<<"Alice"<<endl;
       }
 
return 0;
}