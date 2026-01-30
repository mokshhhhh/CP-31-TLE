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
            ll n;
            cin>>n;

           vector<ll> a;
           a.pb(1);
           a.pb(n);
           if(n == 2){
            cout<<1<<" "<<2<<endl;
            continue;
           }
           a.pb(2);
            ll d;
           d = n - 3;

           bool plus = true;
           ll i = 3;
           while(i < n){
                if(plus) {
                    a.pb(a.back() + d);
                }
                else a.pb(a.back() - d);

                d -= 1;
                i += 1;
                plus = !plus;
           }

           reverse(a.begin(), a.end());

           for0(i,n) cout<<a[i]<<" ";
           cout<<endl;

        }
    
    return 0;
    }