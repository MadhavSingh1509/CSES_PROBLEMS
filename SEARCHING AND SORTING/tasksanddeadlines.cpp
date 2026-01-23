#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
 
    sort(v.begin(), v.end()); // sort by duration
 
    long long t = 0;
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        t += v[i].first;
        ans += v[i].second - t;
    }
 
    cout << ans;
    return 0;
}