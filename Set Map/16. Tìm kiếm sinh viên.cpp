#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string,string> mp;
    while(n--) {
        string id, name;
        cin >> id;
        cin.ignore(); 
        getline(cin, name);
        mp.insert({id, name});
    }   

    // neu ma sinh vien thuoc ve 1 ban sinh vien thi in ten
    // khong tim thay thi in NOT FOUND
    int q; cin >> q;
    while(q--) {
        string ms; cin >> ms;
        auto it = mp.find(ms);
        if(it != mp.end()) cout << it->second << endl;
        else cout << "NOT FOUND" << endl; 
    }


    // co the thay it->second bang (*it).second
    return 0;
}
