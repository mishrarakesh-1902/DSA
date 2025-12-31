#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "";

        for (int i = 0; i < n; i++) {
            string option1 = a[i] + s; 
            string option2 = s + a[i]; 
            if (option1 < option2)
                s = option1;
            else
                s = option2;
        }

        cout << s << '\n';
    }

    return 0;
}
