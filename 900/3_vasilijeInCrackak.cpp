#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      long t;
      cin>>t;
 
      while(t--){
         long long n, k, x;
         cin>>n>>k>>x;

        long long maxi_Sum = n*(n + 1)/2;
        maxi_Sum -= (n-k)*(n-k+1)/2;

        long long mini_Sum = k*(k+1)/2;
         if(x> maxi_Sum || x < mini_Sum){
            cout<<"No"<<endl;
         }
         else cout<<"Yes"<<endl;

       }
 
return 0;
}