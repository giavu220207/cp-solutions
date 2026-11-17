#include <bits/stdc++.h>

using namespace std;

#define int long long
#define int128 __int128
#define f(a, b, c) for(int a = b; a <= c; ++a)

const int N = 2e5 + 5;

int n;
int x[N];

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #define task ""
    if ( fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    int ans = 0;

    cin >> n;
    f (i, 1, n) {
        cin >> x[i];
    }

    f (i, 2, n) {
        if (x[i] < x[i - 1]) {
            ans += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }

    cout << ans;
}


