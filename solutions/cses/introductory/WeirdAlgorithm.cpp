#include <bits/stdc++.h>

using namespace std;

#define int long long
#define int128 __int128
#define f(a, b, c) for(int a = b; a <= c; ++a)

const int N = 1e7 + 5;

int n;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #define task ""
    if ( fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    cin >> n;

    while (n != 1) {
        cout << n << " ";
        n = n % 2 ? n * 3 + 1 : n / 2;
    }
    cout << n;

}


