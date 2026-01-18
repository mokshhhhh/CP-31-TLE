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
         for(int i = 0; i < n; ++i){
            cin>>a[i];
         }

         set<long> st;
         for(int i = 0; i < n + 1; ++i){
            st.insert(i);
         }

         for(int i = 0; i < n; ++i){
            st.erase(a[i]);
         }
         
         long mini = min(*st.begin(), k - 1);
         cout<<mini<<endl;



         
       }
 
return 0;
}