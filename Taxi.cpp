#include <bits/stdc++.h>

#define ll long long
#define even(x) (not (x&1))
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int n; cin >> n;
    int a[4] = { 0 };

    for (int i = 0; i < n; i++) {int x; cin >> x; a[--x]++;}

    ll counter = a[3] + a[2];
    a[0] -= min(a[0], a[2]);

    counter += a[1] / 2;

    if (not even(a[1])) counter++, a[0] -= min(2, a[0]);
    
    counter += a[0] / 4;

    if (a[0] % 4 != 0) counter++;

    cout << counter;

    return 0;
}
