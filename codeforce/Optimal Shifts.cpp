#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while (T--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> pos;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') pos.push_back(i);
        }
        if ((int)pos.size() == n) {
            cout<<0<<'\n';
            continue;
        }
        int best = 0;
        int k = pos.size();

        for (int i = 0; i < k; ++i) {
            int a = pos[i];
            int b = pos[(i + 1) % k]; 
            int gap;
            if (b>a) gap = b - a - 1;        
            else       gap = n - (a - b) - 1;

            best = max(best, gap);
        }

        cout<<best<<'\n';
    }

    return 0;
}
