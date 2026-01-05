#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
        vector<long> arr(4);

        for(int i = 0; i < 4; ++i){
            cin>>arr[i];
        }

        long a = arr[0], b = arr[1], c = arr[2] , d = arr[3];
        if( d < b) {
            cout<<-1<<endl;
            continue;
        }

        int moves = 0; //2
        moves = d - b; //2
        a += moves; //-1+2 = 1

        if(a < c){  //1 < -1
            cout<<-1<<endl;
        }

        else{
            

            moves += abs(c - a);
            cout<<moves<<endl;
        }
        
      }
return 0;
}