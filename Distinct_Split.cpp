#include <bits/stdc++.h>

#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int t; cin >> t;

    while (t--) {
        set<char> a, b;
        int n; cin >> n;
        string s; cin >> s;
        int ar[26] = { 0 };

        for (int i = 0; i < n; i++) ar[s[i]-97] += 1, b.insert(s[i]);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            a.insert(s[i]);

            if (ar[s[i] - 97] > 1) ar[s[i] - 97] -= 1; else b.erase(s[i]);

            sum = max(sum, (long long) (a.size() + b.size()));
        }

        cout << sum << endl;
    }

    return 0;
}
