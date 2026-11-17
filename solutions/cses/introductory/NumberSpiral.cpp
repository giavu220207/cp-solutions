#include <bits/stdc++.h>

using namespace std;

#define int long long
#define int128 __int128
#define f(a, b, c) for(int a = b; a <= c; ++a)

const int N = 1e6 + 5;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #define task ""
    if ( fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y;

        z = max(x, y);

        cout << z * z - (z % 2 ? abs(x - 1) + abs(y - z) : abs(x - z) + abs(y - 1)) << '\n';
    }

}


