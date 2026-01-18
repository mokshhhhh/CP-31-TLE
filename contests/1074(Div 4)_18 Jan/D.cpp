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
            ll n, m, h;
            cin>>n>>m>>h;

            vector<long long> a(n);
            for0(i, n) cin>>a[i];

            vector<long long> t = a;

            //bool reset = false;
            stack<int> ind;
            while(m--){
                long long b, c;
                cin>>b>>c;

                
                if(t[b-1] + c >  h){

                    while(!ind.empty()){
                        t[ind.top()] = a[ind.top()];
                        ind.pop();
                    }
                    
                    continue;
                }

                else{
                   t[b-1] += c;
                   ind.push(b-1);
                }
            }

            for0(i,n) cout<<t[i]<<" ";
            cout<<endl;
        }
    
    return 0;
    }