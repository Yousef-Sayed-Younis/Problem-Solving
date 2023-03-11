#include <algorithm>
#include <bits/stdc++.h>

#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    vector<int> a;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int count = distance(a.begin(), unique(a.begin(), a.begin()+n));

    cout << count;

    return 0;
}
