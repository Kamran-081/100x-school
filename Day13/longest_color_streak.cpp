#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxLen = 1, curr = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            curr++;
            if (curr > maxLen) maxLen = curr;
        } else {
            curr = 1;
        }
    }

    cout << maxLen;
    return 0;
}
