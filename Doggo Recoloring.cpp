#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

void start()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void yes()
{
    cout << "YES"; exit(0);
}

int main()
{
    start();

    int n; cin >> n;
    string s; cin >> s;

    if (n == 1) yes();

    int arr[26] = {0};
    for (int i=0; i<n; i++) {
        if (arr[s[i]-97] == 1) yes();
        arr[s[i]-97]++;
    }

    for (int i=0; i<26; i++) if (arr[i] >= 2) yes();

    cout << "NO";

    return 0;
}
