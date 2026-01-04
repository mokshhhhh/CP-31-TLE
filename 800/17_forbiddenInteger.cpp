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
        int n, k, x;
        cin >> n >> k >> x;

        if (x == 1)
        {
            if (n % 2 == 0)
            {
                if (k >= 2)
                {
                    cout << "Yes" << endl;
                    cout << n / 2 << endl;

                    for (int i = 0; i < n / 2; ++i)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                    continue;
                }
                else
                {
                    cout << "No" << endl;
                    continue;
                }
            }
            else
            {
                if (k <= 2)
                {
                    cout << "No" << endl;
                    continue;
                }
                else
                {

                    cout << "Yes" << endl;
                    int no = (n - 3) / 2;
                    cout << no + 1 << endl;
                    cout << 3 << " ";
                    for (int i = 0; i < no; ++i)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                    continue;
                }
            }
        }

        else
        {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}