#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int count = 0;
    cin>>count;
    unordered_map <int,int> mp;
    while(count --){
        int n,m;
        cin>>n>>m;
        if(mp.count(m)) mp[m] = min(mp[m],n);
        else mp[m] = n;
    }
    int ans = 0;
    for(auto i:mp){
        ans = max(ans,i.second);
    }
    cout<<ans<<endl;
}