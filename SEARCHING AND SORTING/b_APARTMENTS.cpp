#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,m,k;
cin>>n>>m>>k;
vector<int>v(n);
 
for(int i=0;i<n;i++)cin>>v[i];
vector<int>room(m);
 
for(int i=0;i<m;i++)cin>>room[i];
int i=0;
int j=0;
int c=0;
sort(v.begin(),v.end());
sort(room.begin(),room.end());
while(i<n&&j<m){
    if(v[i]-k<=room[j]&&room[j]<=v[i]+k){
        i++;j++;
        c++;
    }
    else if(room[j]<v[i]-k)j++;
    else if(room[j]>v[i]+k) i++;}
    
    cout<<c;
    return 0;
}