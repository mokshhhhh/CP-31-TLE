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
    for(int i = 0; i < n ; ++i){
        cin>>a[i];
    }

    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());
    if(maxi == a[0]){
        cout<<"No"<<endl;
        continue;
    }

    if(mini == a[0]) {
        cout<<"Yes"<<endl;
        continue;
    }
    
    cout<<"No"<<endl;
    // vector<int> copy = a;
    // sort(copy.begin(), copy.end());

    // int i = 1;
    // while(i < n - 1){
    //     if(a[i] > a[i - 1] && a[i] > a[i+1]){
    //         swap(a[i], a[i+1]);
    //         i += 1;
    //         //continue;
    //     }

    //     i += 1;
    // }

    // if(a == copy) cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
}
return 0;
}