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

         string s;
         cin >> s;

         int l(0) , r(0), maxiL(0), maxiR(0);

         for(char ch : s){
            if(ch == '<') {
               l++;
               maxiL = max(maxiL, l);
               r = 0;
            }

            else {
               r++;
               maxiR = max(maxiR, r);
               l = 0;
            }
         }

         cout<<max(maxiL, maxiR) + 1<<endl;
         
      }

      return 0;
   }