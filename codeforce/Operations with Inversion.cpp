// //code
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int T;
//     cin>>T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         vector<int> dp(n, 1);
//         for (int i=0;i<n;i++) {
//             for (intj=0;j<i;j++) {
//                 if (a[j]<=a[i]) {
//                     dp[i]=max(dp[i], dp[j] + 1);
//                 }
//             }
//         }
//         int lnds=*max_element(dp.begin(), dp.end());
//         cout<<n-lnds<<'\n';
//     }
//     return 0;
// }


// //new code

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int mn = a[n-1];
//         int operations = 0;
//         for (int i = n - 2; i >= 0; i--) {
//             if (a[i] > mn) {
//                 operations++;
//             }
//             mn = min(mn, a[i]);
//         }

//         cout<<operations<<'\n';
//     }

//     return 0;
// }



// question Little Fairy's Painting

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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        set<long long> s(a.begin(), a.end());
        long long d = s.size();

        long long ans = LLONG_MAX;
        for (auto x : s) {
            if (x >= d) {
                ans = min(ans, x);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
