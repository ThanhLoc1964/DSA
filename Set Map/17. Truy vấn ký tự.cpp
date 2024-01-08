#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    map<char,int> mp;
    for(auto &x : s) {
        mp[x]++;
    } 

    // dong 1: ky tu co tan suat lon nhat, neu co nhieu thi in tu dien nho
    // dong 2: ky tu co tan suat nho nhat, neu co nhieu thi in tu dien lon

    char cMax = ' '; int max = -1e9;
    char cMin = ' '; int min = 1e9; 
    for(auto it : mp) {
        if(it.second > max || (it.second == max && it.first < cMax)) {
             cMax = it.first;
             max = it.second;
        }

        if(it.second < min || (it.second == min && it.first > cMin)) {
            cMin = it.first;
            min = it.second;
        }
    } 

    cout << cMax << " " << max << endl;
    cout << cMin << " " << min << endl;
    cout << mp.size();
       
    return 0;
}
