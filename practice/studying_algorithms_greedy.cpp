#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector<int> arr(n);

    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin>>x;

    sort(arr.begin(), arr.end());
    


    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("/Users/aniketkundu12072004/codeforces/input.in", "r+", stdin);
    freopen("/Users/aniketkundu12072004/codeforces/output.out", "w", stdout);
    solve();
    
    
    return 0;
}