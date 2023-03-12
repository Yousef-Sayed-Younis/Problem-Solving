#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define start() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string binary(int n) {
    string binaryNum = "";
    
    while (n) {
        binaryNum += to_string(n % 2);
        n /= 2;
    }

    return binaryNum;
}

string isPalindrome(string s) {
    string init = s, fin = "";

    while (s != "") {
        fin += s.back();
        s.pop_back();
    }

    if (init == fin) return "YES"; else return "NO";
}

int main()
{
    start();

    int n; cin >> n;

    if (n % 2 == 0) {cout << "NO"; return 0;}

    cout << isPalindrome(binary(n));

    return 0;
}
