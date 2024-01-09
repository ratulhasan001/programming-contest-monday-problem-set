#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;
using ll = long long;
using pii = pair < int, int >;
template <typename T> using ordered_set = tree<T, null_type, less<T>,
rb_tree_tag,  tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

ll bin_to_deci(ll n) {
    ll num = n, dec_value = 0, base = 1, temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
ll convert(int n) {
    ll bin = 0;
    ll rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
  return bin;
}
bool isPrime(int n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void attack() {
    ll n;
    cin >> n;
    if(n == 0 or n == 1) {
        cout << "NO" << '\n';
        return;
    }
    ll deci = bin_to_deci(n);
    cout << (isPrime(deci) ? "YES" : "NO") << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
        attack();
    }
    return 0;
}