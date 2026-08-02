#include <iostream>
#include <string>
using namespace std;

bool vowel(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < k; i++)
        if (vowel(s[i])) cnt++;

    cout << cnt;

    for (int i = k; i < n; i++) {
        if (vowel(s[i])) cnt++;
        if (vowel(s[i-k])) cnt--;
        cout << " " << cnt;
    }

    return 0;
}
