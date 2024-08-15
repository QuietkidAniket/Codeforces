#include <iostream>
#include <vector>
using namespace std;    

int main(){
    // no of test cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){   

    int n;
    cin >> n;
    
    vector<int> a;
    for(int i =  0;  i < n; i++){
        int x;
        cin >> x;

        if(i && a.back() > x){
            a.emplace_back(1);
        }

        a.emplace_back(x);
    }
    cout << a.size() << '\n';
    for(auto a_i : a){
        cout << a_i << ' ';
    }
    cout << '\n';
    
    }
    
    
}