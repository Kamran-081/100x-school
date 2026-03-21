#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_set<long long> s;

    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        if(s.count(x - a)) {
            cout << "TRUE";
            return 0;
        }

        s.insert(a);
    }

    cout << "FALSE";
}
