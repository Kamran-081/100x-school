#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_set<long long> s;
    s.insert(0);

    long long sum = 0;

    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;

        if(s.count(sum - x)) {
            cout << "YES";
            return 0;
        }

        s.insert(sum);
    }

    cout << "NO";
}
