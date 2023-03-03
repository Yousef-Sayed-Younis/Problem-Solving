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

    int n; cin >> n;

    int ar[n];
    ll arr[n], srt[n];
    for (int i=0; i<n; i++) {
        cin >> ar[i];
        arr[i] = i==0 ? ar[i] : ar[i] + arr[i-1];
    }

    sort(ar, ar+n);

    for (int i=0; i<n; i++) srt[i] = i==0 ? ar[i] : ar[i] + srt[i-1];

    int m; cin >> m;
    while (m--){
        int t, l, r; cin >> t >> l >> r;

        ll x = t == 1 ? (l==1 ? arr[r-1] : arr[r-1] - arr[l-2]) : (l==1 ? srt[r-1] : srt[r-1] - srt[l-2]);

        cout << x << endl;
    }

    return 0;
}
