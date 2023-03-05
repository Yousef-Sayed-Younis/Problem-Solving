#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int binarySearch(int a[], int l, int h, int x, int max = 0) {
    if (l <= h) {
        int mid = (l + h) / 2;

        if (a[mid] == x and a[mid+1] > a[mid]) return mid+1;
        if (a[mid] > x) return binarySearch(a, 0, mid-1, x, max);
        return binarySearch(a, mid+1, h, x, mid+1);
    }

    return max;
}

int main()
{
    start();

    int n; cin >> n; 
    int prices[100000];

    for (int i = 0; i < n; i++) cin >> prices[i];

    sort(prices, prices + n);

    int q; cin >> q;
    while (q--) {
        int m; cin >> m;
        cout << binarySearch(prices, 0, n-1, m) << endl;
    }

    return 0;
}
