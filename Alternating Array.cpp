#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define even(x) (not (x&1))
#define forN(n) for (int i = 0; i < n; i++)
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    start();

    int n, x; cin >> n >> x; 

    int counterOne = 1, counterTwo = 0, a = -x;
    forN(n-1) {
        int y; cin >> y; int b = y;

        if (x * y > 0) counterTwo++, y = -y;
        if (a * b > 0) counterOne++, b = -b;
        
        x = y, a = b;
    }

    cout << min(counterOne, counterTwo);

    return 0;
}
