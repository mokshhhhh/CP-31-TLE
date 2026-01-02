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

   map<int, int> mpp;

   for(int val : a){
        mpp[val]++;
   }

   if(mpp.size() > 2){
        cout<<"No"<<endl;
        continue;
   }

   
   int f1 = mpp.begin()->second;
   int f2 = mpp.rbegin()->second;

   if(f1 == f2) cout<<"Yes"<<endl;
   else if(n%2 == 1 && abs(f1- f2) == 1){
    cout<<"Yes"<<endl;
   }
   else cout<<"No"<<endl;

    

}
return 0;
}