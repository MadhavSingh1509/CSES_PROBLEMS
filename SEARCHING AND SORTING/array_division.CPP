// Online C++ compiler to run C++ program online
//CLASSICAL BINARY SEARCH ON ANSWERS
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long l=*max_element(v.begin(),v.end());
    long long h=accumulate(v.begin(),v.end(),0LL);
    long long mid=l+(h-l)/2;
    long long ans=h;
    
    while(l<=h){
        mid=l+(h-l)/2;
        int c=1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(sum+v[i]<=mid){sum=sum+v[i];}
            else {sum=v[i];
                c++;
            }
        }
        if(c<=k){
            ans=mid;
            h=mid-1;
        }
        
        else l=mid+1;
    }
    cout<<ans<<endl;
 
    return 0;
}
