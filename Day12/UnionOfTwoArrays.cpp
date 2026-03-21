#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    set<long long> s;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << "\n";
    for(auto x : s) cout << x << " ";
}
