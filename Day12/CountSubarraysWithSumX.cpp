#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, long long> mp;
    mp[0] = 1;

    long long sum = 0, count = 0;

    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;

        count += mp[sum - x];
        mp[sum]++;
    }

    cout << count;
}
