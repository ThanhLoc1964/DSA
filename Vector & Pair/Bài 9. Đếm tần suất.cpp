#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<pair<int,int>> v;
    

    for(int i = 0 ; i < n; i++) {
       int flag = 0;
       for(auto &x : v) {
          if(a[i] == x.first){
            x.second++;
            flag = 1;
            break;
          }
       }
       if(flag == 0) v.push_back({a[i], 1});
    }

    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
