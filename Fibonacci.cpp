#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define clr(v, d) memset(v, d, sizeof(v))

#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int savedFib[31]; 

ll fibSave(int n) {
    if (n <= 2) return (n == 2 ? 1 : 0); // Base Case
    
    if (savedFib[n] != -1) // If There is a Value 
        return savedFib[n];
  
    // If There is no Value
    return savedFib[n] = fibSave(n-1) + fibSave(n-2); // Check Lower Values and Save New Value, So I don't need to Calcuate it again
}

int main()
{
    start();

    int n; cin >> n;
    clr(savedFib, -1); // Fill Array with -1

    cout << fibSave(n);

    return 0;
}
