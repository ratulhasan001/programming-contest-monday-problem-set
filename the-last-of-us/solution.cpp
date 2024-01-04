#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll odd = 0, even = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 0) even += v[i];
        else odd += v[i];
    }
    debug(even, odd);
    if(even == 0 or odd == 0) {
        cout << 0 << '\n';
    }
    else cout << max(even, odd) / min(odd, even);
    return 0;
}
