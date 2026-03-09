#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long sum=0;
    long long x;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            if(i==j) sum+=x;
        }
    }

    cout<<sum;
}
