#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    for(long long i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(i * i == n)
                count++;
            else
                count += 2;
        }
    }

    cout << count;

    return 0;
}
