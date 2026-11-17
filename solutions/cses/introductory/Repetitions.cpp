#include <bits/stdc++.h>

using namespace std;

#define int long long
#define int128 __int128
#define f(a, b, c) for(int a = b; a <= c; ++a)

const int N = 1e7 + 5;

string s;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #define task ""
    if ( fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    int n, ans = 1;

    cin >> s;

    n = s.size();
    s = "!" + s;

    f (i, 1, n) {
        int j = i, cnt = 0;

        while (j <= n && s[j] == s[i]) {
            cnt++;
            j++;
        }

        i = j - 1;

        ans = max(ans, cnt);
    }

    cout << ans;
}


