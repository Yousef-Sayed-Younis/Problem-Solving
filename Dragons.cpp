#include <bits/stdc++.h>

#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int s, n; cin >> s >> n;

    pair<int, int> a[n];

    for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;

    sort(a, a+n);

    for (int i=0; i<n; i++){
        if (a[i].first >= s) {
            cout << "NO"; return 0;
        }

        s += a[i].second;
    }   

    cout << "YES";    
     
    return 0;
}
