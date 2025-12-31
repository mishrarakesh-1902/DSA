#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, a, b;
        cin>>l>>a>>b;
        long long g = gcd(l, b);
        long long maxPrize = a + g * ((l - 1 - a) / g);
        cout<<maxPrize<<'\n';
    }

    return 0;
}
