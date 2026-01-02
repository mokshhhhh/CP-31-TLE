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
        for(int i= 0; i < n; ++i){
            cin>>a[i];
        }

        vector<int> b , c;
        
        int maxi = *max_element(a.begin(), a.end());
        for(int i = 0; i < n; ++i)
        {
            if(a[i] != maxi) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        int m = b.size() , k = c.size();

        if(m == 0) cout<<-1<<endl;
        else{
            cout<<m<<" "<<k<<endl;

            for(int i = 0; i < m; ++i){
                cout<<b[i]<<" ";
            }
            cout<<endl;

            for(int j = 0; j < k; j++){
                cout<<c[j]<<" ";
            }
            cout<<endl;
        }


      }
return 0;
}