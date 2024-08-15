#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
vector<int> X(n), Y(n);

for(auto& x : X)
{
    cin>> x;   
}
for(auto& y : Y)
{
    cin >> y;
}

double max_dist {0};
for(int i = 0; i< n; i++)
{
    for(int j = i +1; j< n; j++)
    {
        int dx = X[i] - X[j];
        int dy = Y[i] - Y[j];
        double square = dx*dx + dy*dy;
        max_dist = max(square, max_dist);
    }   
}

cout << (int)max_dist << '\n';

return 0;
}