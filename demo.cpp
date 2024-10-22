#include <bits/stdc++.h>
using namespace std;

static bool lexicographical_compare(const int a, const int b){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int num1 = log10(a) + 1;
    int num2 = log10(b) + 1;

    if(a > b){
        if(num1 > num2){
            return a/ pow(10, num1- num2) <  b;
        }else{
            return false;
        }
    }else{
        if(num2 > num1){
            return b/ pow(10, num2- num1) >= a;
        }else{
            return true;
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


int n;
cin>> n;

vector<int> arr {-1,-3, 23,7,9,21,7, 34, 1, 5,3 ,2};


sort(arr.begin(), arr.end(), [](const int a, const int b){ return a>=b;} );


for(int i = 0; i< arr.size(); i++)
{
    cout << arr[i] << ", "; 
}
cout << '\n';


return 0;
}