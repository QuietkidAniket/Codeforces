#include <bits/stdc++.h>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>> t;
vector<long long int> output;
while(t--){
    int n, k;
    cin >> n >> k;

    int a[n];
    int b[n];

    int left = INT_MIN, right= INT_MIN, mid;
    for(int i = 0; i< n; i++)
    {
        cin >> a[i];
        right = max(right, a[i]);

    }   

    for(int i = 0; i< n; i++)
    {
        cin >> b[i];
    }
    long long int score {0};
    // TLE : 
    // while(k--){
    //     int m = INT_MIN, index = -1;
    //     int count_0 = {0};
    //     for(int i = 0; i< n; i++)
    //     {   
    //         if(a[i] == 0)count_0++;
    //         if(m < a[i]){
    //             m = a[i];
    //             index = i;
    //         }
    //     }
    //     if(count_0 == n)break;
    //     score += a[index];
    //     a[index] = max(0,a[index] - b[index]);
    // }
    

    output.push_back(score);

}

for(auto const& x : output)
{
    cout << x << '\n';
}

return 0;
}