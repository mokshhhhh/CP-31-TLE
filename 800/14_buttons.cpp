#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
      
      while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        if(c % 2 == 1){
            if(a >= b){
                cout<<"First"<<endl;
                continue;
            }
            else {cout<<"Second"<<endl;
                continue;
            }
        }

        else{
            if(a > b){
                cout<<"First"<<endl;
                continue;
            }
            else {
                cout<<"Second"<<endl;
                continue;
            }
        }
      }
return 0;
}