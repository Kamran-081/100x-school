#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    long long left = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (left == total)
            count++;

        left += arr[i];
        total -= arr[i];
    }

    cout << count;
    return 0;
}
