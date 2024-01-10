#include <bits/stdc++.h>
using namespace std;


bool customSort(int a, int b) {
    // neu 2 so la chan va le thi le dung truoc
    if(a % 2 != b % 2) return a % 2 != 0;   
    else {   // neu ca hai deu chan hoac le 
        if(a % 2 != 0) return a > b; // le giam dan
        else return a < b; // chan tang dan
    }
}


int main() {
    int n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;

    sort(a, a + n, customSort);

    for(int x : a) cout << x << " ";
    
    return 0;
}
