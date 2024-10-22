#include <bits/stdc++.h>
using namespace std;

const int MAX = 3 * 1e5;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n >>m;    
        bitset<MAX+1> is_prime;

        is_prime.set();
        is_prime[0] = is_prime[1] = 0;

        int count = 0;
        for(long long i = 0LL; i * i <= m*n ; i++){
            if(is_prime[i]){
                for(long long j = i*i; j<=m*n; j+= i){
                    int count = 0;
                    is_prime[j]  = 0;
                }
            }
        }
        int matrix [n][m];
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m; j++){
                matrix[i][j] = is_prime[i];
            }
        }






    }
    
    
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