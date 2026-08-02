#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char,int> last;
    int l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        if (last.count(s[r]))
            l = max(l, last[s[r]] + 1);

        last[s[r]] = r;
        ans = max(ans, r - l + 1);
    }

    cout << ans;

    return 0;
}
