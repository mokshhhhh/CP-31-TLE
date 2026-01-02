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
        for(int i = 0;  i < n ; ++i){
            cin>>a[i];
        }

        vector<int> b = a;
        sort(b.begin(), b.end());
        if(a == b){
            int mini = INT_MAX;
            for(int i = 1; i < n; ++i){
                if(a[i] - a[i - 1] < mini){
                    mini = a[i] - a[i-1];
                }
            }

            cout<<mini/2 + 1<<endl;

        }
        else{
            cout<<0<<endl;
        }
    }
return 0;
}