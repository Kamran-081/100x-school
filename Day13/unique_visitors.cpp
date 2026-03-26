#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
        cout << s.size() << " ";
    }

    return 0;
}
