#include <iostream>
using namespace std;

long long sum(long long x) {
    return x * (x + 1) / 2;
}

int main() {
    int q;
    cin >> q;

    while(q--) {
        long long l, r;
        cin >> l >> r;

        long long ans = sum(r) - sum(l - 1);

        cout << ans << endl;
    }

    return 0;
}
