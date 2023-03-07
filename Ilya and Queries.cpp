#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

void start()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    start();

    string s; cin >> s;

    int arr[100005] = {0};
    for (int i = 1; i <= s.size(); i++) arr[i] = arr[i-1] + (s[i] == s[i-1]);

    int m; cin >> m;

    for (int i=0; i<m; i++){
        int l, r; cin >> l >> r;

        cout << arr[r-1] - arr[l-1] << endl;
    }

    return 0;
}
