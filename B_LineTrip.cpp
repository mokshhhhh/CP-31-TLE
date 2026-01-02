    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int t;
        cin>>t;

        while(t--){
            long long n , x;
            cin>>n>>x;

            vector<long long> a(n);
            for(int i = 0; i < n; ++i){
                cin>>a[i];
            }

            long long maxi = a[0];
            
            for(int i = 1; i < n; ++i){
                maxi =  max(maxi, a[i] - a[i-1]);
            }

            maxi = max(maxi, 2*(x - a[n - 1]));

            cout<<maxi<<endl;
        }

    return 0;
    }