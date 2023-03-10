#include <bits/stdc++.h>

#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int n; cin >> n;

    int a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];

    int sumS = 0, sumD = 0, t = 1;
    for (int i = 0, j = n-1; j >= i; ) {
        if (t) sumS += a[i] >= a[j] ? a[i++]: a[j--], t = 0;
      
        else sumD += a[i] >= a[j] ? a[i++] : a[j--], t = 1;
    }
  
    cout << sumS << " " << sumD;

    return 0;
}
