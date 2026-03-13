#include <iostream>
using namespace std;

int divisors(int x){
    int count = 0;

    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(i*i==x)
                count++;
            else
                count += 2;
        }
    }

    return count;
}

int main(){
    int n,q,k;
    cin >> n >> q >> k;

    int a[n+1], b[n+1], prefix[n+1];

    for(int i=1;i<=n;i++){
        cin >> a[i];

        if(divisors(a[i]) == k)
            b[i] = 1;
        else
            b[i] = 0;
    }

    prefix[0] = 0;

    for(int i=1;i<=n;i++)
        prefix[i] = prefix[i-1] + b[i];

    while(q--){
        int l,r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }
}
