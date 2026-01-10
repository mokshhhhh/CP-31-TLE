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

         string s;
         cin>>s;

        unordered_map<char, long> mpp;
        for(char ch : s){
            mpp[ch]++;
        }

        int freq = 0;
        for(auto v : mpp){
            if(v.second %2 == 1) freq++;
        }

        if(freq > k + 1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

         
       }
 
return 0;
}