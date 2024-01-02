#include <bits/stdc++.h>
using namespace std;


double spaceO(int x , int y) {
    return sqrt((x * x) + (y * y));
}


int main() {
    int n; cin >> n;
    vector<pair<int, int>> v;
    while(n > 0) {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
        n--;
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << fixed << setprecision(2) << spaceO(it->first, it->second) << " " ;
    }
    
    return 0;
}
