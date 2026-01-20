#include<bits/stdc++.h>
using namespace std;
 
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) 
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)
 
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 
typedef vector<int> vi;
typedef long long ll;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         string s, t;
         cin>>s>>t;

         int s_size = s.size(), t_size = t.size();

         vector<int> freq(26, 0);
         for(int i = 0; i < t_size; ++i){
            freq[t[i] - 'A']++;
         }

         for(int i = s_size; i >= 0; --i){
            if(freq[s[i] - 'A'] > 0)
                freq[s[i] - 'A']--;
            
            else s[i] ='.';
         }

         string test = "";
         for(char ch : s){
            if(ch == '.')continue;
            test += ch;
         }

         if(test == t) cout<<"Yes"<<endl;
         else cout<<"No"<<endl;

       }
 
return 0;
}