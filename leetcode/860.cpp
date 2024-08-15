
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n10 =0, n5=0;
        for(auto const& bill : bills){
            int change {bill - 5};

            // if bill is 5 dollars
            if(bill  == 5){ // change = 0
                n5++;
            }
            else if(bill == 10){ // change = 5
                if(n5 > 0){
                    n5--;
                    n10++;
                }else{  // cannot give 5 dollar change
                    return false;
                }

            }else { // change = 15
                if(n5 > 0 && n10 >0){ // 10 + 5 = 15
                    n5--;
                    n10--;
                }else if(n5 >=3 ){ // 5 * 3 = 15
                    n5 -= 3;
                }
                else { // cannot give change 15 dollar change
                    return false;
                }

            }

        }
        return true;
    }
};

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
vector<int> bills(n);

for(int i = 0; i< n; i++)
{
    cin >> bills[i];
}
Solution obj;

if(obj.lemonadeChange(bills))cout << "Yes" <<'\n';
else cout << "No" << '\n';

return 0;
}