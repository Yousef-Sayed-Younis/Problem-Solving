#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define lp(i, n) for(int i = 0; i < (int) (n); ++i)
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll n, w;
int weights[21], values[21];

int knapsack(int i, int reminder) {
    if (i == n) return 0; // Base Case

    int choice1 = knapsack(i+1, reminder); // Leave
    int choice2 = 0; // To Maximize

    if (reminder >= weights[i]) 
        choice2 = knapsack(i+1, reminder - weights[i]) + values[i];

    return max(choice1, choice2);
}


int main()
{
    start();

    cin >> n >> w;

    lp(i, n) cin >> weights[i] >> values[i];

    cout << knapsack(0, w);    

    return 0;
}
