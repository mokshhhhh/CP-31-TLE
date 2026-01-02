#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // These lines make input/output faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read string length
        string s;
        cin >> s; // Read the actual string

        int total_dots = 0;
        bool found_three = false;

        // Check for "..." and count dots
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                total_dots++;
                if (i > 1 && s[i-1] == '.' && s[i-2] == '.') {
                    found_three = true;
                }
            }
        }

        if (found_three) cout << 2 << "\n";
        else cout << total_dots << "\n";
    }
    return 0;
}