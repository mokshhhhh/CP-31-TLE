#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        vector<long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if(n%2 == 1){

            int xo = 0;
            for(int i = 0; i < n; ++i){
                xo ^= a[i];
            }

            cout<<xo<<endl;
            continue;
        }

        else{
            int xo = 0;
            for(int i = 0; i < n; ++i){
                xo ^= a[i];
            }

            if(xo == 0){
                cout<<a[n - 1]<<endl;
                continue;
            }
            
            else cout<<-1<<endl;
        }
    }

    return 0;
}