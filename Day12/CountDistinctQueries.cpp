#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    cin >> q;

    unordered_map<long long, int> mp;

    while(q--) {
        int t;
        cin >> t;

        if(t == 1) {
            long long x;
            cin >> x;
            mp[x]++;
        }
        else if(t == 2) {
            long long x;
            cin >> x;
            mp.erase(x);
        }
        else if(t == 3) {
            cout << mp.size() << "\n";
        }
        else {
            long long x;
            cin >> x;
            if(mp.count(x)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
