

//REVISE IT LATER
//EXCELLENT CONCEPT TO LEARN IN THIS QUESTION
#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int q;
    cin >> q;
    vector<long long> v(q);
    for(int i = 0; i < q; i++) cin >> v[i];
 
    for(auto k : v){
 
        long long c = 9;
        long long d = 1;
        long long begin = 1;
 
        // find correct block
        while(k > begin + d * c - 1){
            begin += d * c;
            c *= 10;
            d++;
        }
 
        // starting number of block
        long long st = 1;
        for(int i = 1; i < d; i++) st *= 10;
 
        // position inside block
        long long pos = k - begin;
 
        long long offset = pos / d;
        long long num = st + offset;
 
        int idx = pos % d;
        cout << to_string(num)[idx] << "\n";
    }
 
    return 0;
}