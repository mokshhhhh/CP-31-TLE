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
            long n,  w;
            cin>>n>>w;

            ll k = n/w;

            cout<<n - k<<endl;

        }
    
    return 0;
    }