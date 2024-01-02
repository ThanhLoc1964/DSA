#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;

    while(n > 0) {
        int x; cin >> x;
        v.push_back(x);
        n--;
    }

    sort(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
        cout << *it << " ";
    }
    
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
       cout << *it << " ";
    }

    return 0;
}
