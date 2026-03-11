#include <iostream>
using namespace std;

int main() {
    long long q;
    cin >> q;

    while(q--) {
        long long t, l, r;
        cin >> t >> l >> r;

        long long ans = 0;

        if(l > r) ans = 0;
        else if(t == 1) ans = r - l - 1;
        else if(t == 2) ans = r - l;
        else if(t == 3) ans = r - l;
        else if(t == 4) ans = r - l + 1;

        if(ans < 0) ans = 0;

        cout << ans << endl;
    }

    return 0;
}
