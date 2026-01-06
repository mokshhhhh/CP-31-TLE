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

         int no = count(a.begin(), a.end() , 2);
         if(no %2 == 1) cout<<-1<<endl;
         else{
            int curr = 0;
            for(int i = 0; i < n; ++i){
               if(a[i] == 2) curr++;
               if(curr == no/2){
                  cout<<i+1<<endl;
                  break;
               }
            }
         }
       }
 
return 0;
}