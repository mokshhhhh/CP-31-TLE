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

        vector<int> a_new;
        a_new.push_back(a[0]);
        for(int i = 1; i < n; ++i){
            if(a[i] - a[i - 1] < 0){
                a_new.push_back(a[i]);
            }
            a_new.push_back(a[i]);
        }

        int m = a_new.size();
        cout<<m<<endl;

        for(int i = 0; i < m; ++i){
            cout<<a_new[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}