
// Cách 1: Set
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> se;

    while(n) {
        int x; cin >> x;
        se.insert(x);
        n--;
    }

    cout << se.size();

    
    return 0;
}

// Cách 2: Map
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int,int> mp;
    while(n){
        int x; cin >> x; 
        mp[x]++;
        n--;        
    } 

    cout << mp.size();
       
    return 0;
}

// Cách 3: Sắp xếp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;

    sort(a, a + n);
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) cnt++;
    }   

    cout << cnt;
    return 0;
}
