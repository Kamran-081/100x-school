#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int l=0;l<n;l++){

        int sum = 0;

        for(int r=l;r<n;r++){

            sum += a[r];

            cout << sum << endl;
        }
    }
}
