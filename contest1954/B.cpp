#include <iostream>
using namespace std;

int main()
{
    // vector<int> ans(0);
    int t;
    cin >> t;
    while (t--)
    {
        // length of array
        int n;
        // array;
        cin >> n;

        int arr[n];

        for(int i {0}; i < n; i++)
        {
            cin >> arr[i];
        }

        int left{0}, right{n-1};
        int ans {0};
        while(left < right)
        {
            if(arr[left] == arr[right])ans++;
            if(arr[left] != arr[right]){
                break;
            }
            if(arr[left] != arr[left+1]){
                break;
            }
            if(arr[right] != arr[right-1]){
                break;
            }
            left++; right--;
        }
        // cout << "ans : "<< ans << '\n';
        if(left >= right){
            cout << -1 << '\n';
        }else{
            cout << ans << '\n';
        }
    }
    // for(const auto& x: ans)cout<< x << '\n';
}