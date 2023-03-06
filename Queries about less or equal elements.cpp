#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int x, a[1000005];

bool LOQ(int i) {return a[i] <= x;}

int BS(int l, int h, int ans = 0)
{
    if (h >= l) {
        int mid = (h + l) / 2;

        if (LOQ(mid)) return BS(mid + 1, h, mid + 1);

        return BS(l, mid - 1, ans);
    }
    
    return ans;
}

int main()
{
    start();

    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    for (int i = 0; i < m; i++) cin >> x, cout << BS(0, n - 1) << " ";

    return 0;
}
