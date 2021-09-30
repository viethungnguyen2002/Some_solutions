#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
          int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>>satisfying;
    for (int i=0;i<n;i++) {
        int itr = max_element(a.begin(), a.end()) - a.begin();
        if (itr != n - i - 1) {
            satisfying.push_back({itr + 1, n - i, 1});
        }
        a.erase(a.begin() + itr);
    }
    cout<<satisfying.size()<<" "<<"\n";
    for(auto i : satisfying) cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
    }    
}
