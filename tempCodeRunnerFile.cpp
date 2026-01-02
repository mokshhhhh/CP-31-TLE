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
            int n, m;
            cin >> n >> m;
            string x;
            cin >> x;
            string s;
            cin >> s;

            int op = 0;
            while (1)
            {
                size_t pos = x.find(s);
                if (pos != string::npos)
                {
                    cout << op << endl;
                    break;
                }

                if (x.length() > 2 * m)
                {
                    cout << -1 << endl;
                    break;
                }
                x.append(x);
                op++;
            }
        }
        return 0;
    }