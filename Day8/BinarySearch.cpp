#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long x;
    cin>>x;

    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            cout<<"YES";
            return 0;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }

    cout<<"NO";
}
