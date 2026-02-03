#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    map<char,int> m;
    for (char ch : s) m[ch]++;
 
    int oddcount = 0;
    for (auto p : m) {
        if (p.second % 2) oddcount++;
    }
 
    int n = s.size();
    if (oddcount > 1) {
        cout << "NO SOLUTION\n";
    } else {
        string ans(n, '*');
        int left = 0, right = n - 1;
char oddch='?';
        for (auto p : m) {
            char ch = p.first;
            int cnt = p.second;
 
            if (cnt % 2 == 0) {
                int half = cnt / 2;
                while (half--) {
                    ans[left++] = ch;
                    ans[right--] = ch;
                }
            } else {
                oddch=ch;
                 int half = cnt / 2;
                while (half--) {
                    ans[left++] = ch;
                    ans[right--] = ch;
                }
                
            }
 
        }
if(oddch!='?')ans[n/2]=oddch;
 
        cout << ans << "\n";
    }
 
    return 0;
}