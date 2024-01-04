// Cách 1: Set O(log(n))
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
    
    int q; cin >> q;
    while(q) {
        int x; cin >> x;
        if(se.find(x) != se.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
        q--;
    }
    return 0;
}


// Cách 2: Map O(log(n))
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int,int> mp;
    while(n) {
        int x; cin >> x;
        mp[x]++;
        n--;
    }

    int q; cin >> q;
    while(q) {
        int x; cin >> x;
        if(mp.find(x) != mp.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
        q--;
    }
    return 0;
}


// Cách 3: Binary Search O(log(n))
#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int sizeA, int target) {
    int lo = 1, hi = sizeA;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target)
            return mid;         
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    // không tìm thấy giá trị target trong mảng A
    return -1;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);

    int q; cin >> q;
    while(q) {
        int x; cin >> x;
        if(binary_search(a,n,x) >= 0) cout << "YES" << endl;
        else cout << "NO" << endl; 
        q--;
    }
 
    return 0;
}
//C++ Standard Template Library đã cài đặt sẵn tìm kiếm nhị phân bằng các hàm lower_bound, upper_bound, binary_search, equal_range

