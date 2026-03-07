#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        int shifts=0;

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
            shifts++;
        }

        a[j+1]=key;

        cout<<"Pass "<<i<<": ";
        for(int k=0;k<n;k++) cout<<a[k]<<" ";
        cout<<", ";

        for(int k=0;k<=i;k++) cout<<a[k]<<" ";
        cout<<"| ";
        for(int k=i+1;k<n;k++) cout<<a[k]<<" ";

        cout<<", shifts = "<<shifts<<endl;
    }
}
