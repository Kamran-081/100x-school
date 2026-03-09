#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[105];
    for(int i=0;i<n;i++) cin>>a[i];

    int first=-1,second=-1;

    for(int i=0;i<n;i++){
        if(a[i]>first){
            if(a[i]!=first){
                second=first;
                first=a[i];
            }
        }
        else if(a[i]>second && a[i]!=first){
            second=a[i];
        }
    }

    cout<<second;
}
