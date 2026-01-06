#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        long long n; // Number of elements in the array
        cin >> n;
        long long a[n]; // Array to store the elements
        for (int i = 0; i < n; i++) // Read n elements into the array
            cin >> a[i];
        // Inputs are now stored in array a

        sort(a, a + n); // Sort the array in non-decreasing order
        long long max_number = a[n - 1]; // Maximum element in the array
        long long min_number = a[0]; // Minimum element in the array
        if (max_number == min_number) // Check if all elements are the same
        {
            cout << "NO" << endl; // If all elements are the same, it's impossible to make it beautiful
        }
        else
        {
            cout << "YES" << endl; // It is possible to reorder to make it beautiful
            cout << max_number << " "; // Start with the maximum element
            for (int i = 0; i < n - 1; i++) // Print the rest of the elements
                cout << a[i] << " ";
            cout << endl; // End of the current test case output
        }
    }
    return 0;
}

                                                                       