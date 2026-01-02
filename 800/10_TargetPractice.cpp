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
        vector<vector<char>> a(10, vector<char>(10));

        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                cin >> a[i][j];
            }
        }

        long long score = 0;
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if (a[i][j] != '.')
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                    {
                        score += 1;
                        continue;
                    }

                    if(i == 1 || i == 8 || j == 1 || j == 8){
                        score += 2;
                        continue;
                    }

                    if(i == 2 || i == 7 || j == 2 || j == 7){
                        score += 3;
                        continue;
                    }

                    if(i == 3 || i == 6 || j == 3 || j == 6){
                        score += 4;
                        continue;
                    }

                    if(i == 4 || i == 5 || j == 4 || j == 5){
                        score += 5;
                        continue;
                    }

                }
            }
        }

        cout<<score<<endl;  
    }
    return 0;
}