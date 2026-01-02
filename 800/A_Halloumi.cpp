#include<algorithm>
#include<vector>
#include<math.h>
#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        vector<long long> a(n);
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }

        vector<long long> copy = a;
        sort(copy.begin() , copy.end());

        if(copy == a || k > 1) {
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }

    return 0;
}

