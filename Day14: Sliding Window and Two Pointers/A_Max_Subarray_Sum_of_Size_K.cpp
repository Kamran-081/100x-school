#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    long long ans = sum;

    for (int i = k; i < n; i++) {
        sum += a[i];
        sum -= a[i - k];
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}
