#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long a[n+1], prefix[n+1];

    for(int i=1;i<=n;i++)
        cin >> a[i];

    prefix[0] = 0;

    for(int i=1;i<=n;i++){
        if(i%2==0)
            prefix[i] = prefix[i-1] + a[i];
        else
            prefix[i] = prefix[i-1];
    }

    int q;
    cin >> q;

    while(q--){
        int l,r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }
}
