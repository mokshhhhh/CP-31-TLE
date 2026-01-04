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

        int pos = 0, neg = 0;

        for(int i = 0; i < n; ++i){
            if(a[i] == -1) neg++;
            else pos++;
        }

        if(pos == neg){
            if(neg%2 == 0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            //pos >= neg && neg % 2 == 0
            int ops = 0;
            while(pos < neg){
                ops++;
                pos++;
                neg--;
            }

            if(neg % 2 == 0){
                cout<<ops<<endl;
            }
            else cout<<ops+1<<endl;
        }


      }
return 0;
}
