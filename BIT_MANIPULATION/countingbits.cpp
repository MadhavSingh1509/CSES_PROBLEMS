#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;

    for (long long k = 0; (1LL << k) <= n; k++) {
        long long blocksize = 1LL << (k + 1);
        long long onesperblock = blocksize / 2;

        ans += ((n + 1) / blocksize) * onesperblock;

        long long rem = (n + 1) % blocksize;
        if (rem > onesperblock)
            ans += (rem - onesperblock);
    }

    cout << ans << endl;
    return 0;
}
