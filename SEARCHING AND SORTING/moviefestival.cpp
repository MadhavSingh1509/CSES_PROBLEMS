#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;}
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            
            return a.second<b.second;
            
        });
        int last=v[0].second;
        int c=1;
        for(int i=1;i<n;i++){
            if(v[i].first>=last){c++;
                last=v[i].second;            }
        }
        cout<<c<<endl;
 
    return 0;
}