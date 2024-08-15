#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // vector<int> ans(0);
    int t;
    cin >> t;
    while (t--)
    {
        // no of parts
        int n;
        // no of colors
        int m;
        // no of parts Bob can repaint
        int k;

        cin >> n >> m >> k;

        // base case
        if (k >= n)
        {
            cout << "NO" << '\n';
            continue;
        }

        if (m == 1)
        {
            cout << "NO" << '\n';
            continue;
        }
        int factor = (int)floor(n/m) * (m-1) + ((n %m) ==  0? 0 : (n%m - 1));
        // cout << "factor : " << factor<< '\n';
        if(k == factor){
            cout << "NO" << '\n';
            continue;
        }
        else{
            cout << "YES" << '\n';
        }

    }
    // for(const auto& x: ans)cout<< x << '\n';
}