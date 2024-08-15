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
        int a;
        int b;
        cin >> a >> b;

        int no_of_digits{(int)ceil(log10(a))};
        while (no_of_digits)
        {
            int digit_a = (int)a / (int)pow(10, no_of_digits-1);
            int digit_b = (int)b / (int)pow(10, no_of_digits-1);

            if(digit_a  == digit_b)continue;

            int new_num_a =  digit_a * pow(10, no_of_digits-1) ;
            new_num_a =  a - new_num_a + digit_b * pow(10, no_of_digits-1);
            int new_num_b =  digit_a * pow(10, no_of_digits-1) + b % (int) pow(10 ,no_of_digits-1);
            if(a * b <= new_num_a * new_num_b){
                a = new_num_a;
                b = new_num_b;
            }
            no_of_digits--;
        }
        cout << a << '\n' << b << '\n';
    }
    // for(const auto& x: ans)cout<< x << '\n';
}