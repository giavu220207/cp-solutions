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

    int sum = 0, a;

    cin >> n;
    f (i, 1, n - 1) {
        cin >> a;
        sum += a;
    }

    cout << n * (n + 1) / 2  - sum;

}


