#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int n, m;  cin >> n >> m;

    int ar[100005];
    for (int i = n-1; i >= 0; i--) cin >> ar[i];

    int pr[100005], fr[100005] = {0};
    for (int i = 0; i < n; i++) pr[i] = ++fr[ar[i]] == 1 ? (i == 0 ? 1 : 1 + pr[i-1]) : pr[i-1];

    for (int i = 0; i < m; i++){int x; cin >> x; cout << pr[n-x] << endl;}

    return 0;
}
