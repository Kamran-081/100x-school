#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        int swaps=0;

        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
            }
        }

        cout<<"Pass "<<i+1<<": ";
        for(int k=0;k<n;k++) cout<<a[k]<<" ";
        cout<<", swaps = "<<swaps<<endl;

        if(swaps==0) break;
    }
}
