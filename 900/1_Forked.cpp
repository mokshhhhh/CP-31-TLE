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
        long a, b;
        cin >> a >> b;

        long xk, yk;
        cin >> xk >> yk;

        long xq, yq;
        cin >> xq >> yq;

        set<pair<long, long>> s1, s2;

        // Directions arrays to simplify the loop
        int dx[4] = {-1, 1, -1, 1};
        int dy[4] = {-1, -1, 1, 1};

        // Insert (a, b) combinations
        for (int i = 0; i < 4; i++)
        {
            s1.insert({xk + dx[i] * a, yk + dy[i] * b});
            s2.insert({xq + dx[i] * a, yq + dy[i] * b});
        }

        // Insert (b, a) combinations (The missing part)
        for (int i = 0; i < 4; i++)
        {
            s1.insert({xk + dx[i] * b, yk + dy[i] * a});
            s2.insert({xq + dx[i] * b, yq + dy[i] * a});
        }

        int ans = 0;

        for (auto s : s1)
        {
            if (s2.count(s))
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
