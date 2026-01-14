#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      int t;
      cin>>t;
 
      while(t--){
         long n;
         cin>>n;

         vector<long> a(n);
         for(int i = 0; i < n; ++i) cin>>a[i];

        

        int k = abs(a[0] - 1);
		for (int i = 1; i < n; i++) // Iterate over the permutation
		{
			// Update k to be the gcd of current k and the absolute difference between
			// the current element and its sorted position
			k = gcd(k, abs(a[i] - (i + 1)));
		}
		// Output the maximum k that can be used to sort the permutation
		cout << k << endl;
       }
 
return 0;
}