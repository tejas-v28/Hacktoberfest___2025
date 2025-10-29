#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>>g(n+1);
        for(int i=1;i<=n;++i)
            g[i].first=gcd(i,n),g[i].second=i;

        sort(g.begin()+1,g.end(),[](auto&a,auto&b){
            if(a.first==b.first)
                return a.second<b.second;

            return a.first>b.first;
        });

        cout<<g[1].second;
        for(int i=2;i<=n;++i)cout<<' '<<g[i].second;
        if(t)cout<<'\n';
    }

    return 0;
}
