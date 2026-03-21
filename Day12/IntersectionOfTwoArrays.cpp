#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    set<long long> a, res;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.insert(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if(a.count(x)) res.insert(x);
    }

    cout << res.size() << "\n";
    for(auto x : res) cout << x << " ";
}
