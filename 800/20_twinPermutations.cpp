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

        int mini = *min_element(a.begin(), a.end());
        int maxi = *max_element(a.begin(), a.end());

        int common = mini + maxi;
        vector<int> o;
        for(int i = 0; i < n ; ++i)
        {
            int ele = a[i] - common;
            o.push_back(abs(ele));
            cout<<o[i]<<" ";
        }

        cout<<endl;

        
      }
return 0;
}