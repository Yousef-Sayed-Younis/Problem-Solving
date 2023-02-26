#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define even(x) (not (x&1))
#define charToInt(x) x - 48
#define string(n) char s[n]
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// To cin array do: gets(array);

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

        ll sum = 0;
        for (int i = 0; i < n; i++) {
            a.insert(s[i]);

            if (ar[s[i] - 97] > 1) ar[s[i] - 97] -= 1; else b.erase(s[i]);

            sum = max(sum, (ll) (a.size() + b.size()));
        }

        cout << sum << endl;
    }

    return 0;
}