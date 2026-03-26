#include <iostream>
using namespace std;

long long countDivisors(long long n) {
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n)
                count += 1;
            else
                count += 2;
        }
    }
    return count;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long d1 = countDivisors(A);
    long long d2 = countDivisors(B);

    if (d1 > d2) cout << "A";
    else if (d2 > d1) cout << "B";
    else cout << "DRAW";

    return 0;
}
