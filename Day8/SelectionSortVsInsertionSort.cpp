#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long a[n],b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }

        long long shifts=0,swaps=0;

        for(int i=1;i<n;i++){
            long long key=a[i];
            int j=i-1;

            while(j>=0 && a[j]>key){
                a[j+1]=a[j];
                j--;
                shifts++;
            }
            a[j+1]=key;
        }

        for(int i=0;i<n-1;i++){
            int minIndex=i;
            for(int j=i+1;j<n;j++){
                if(b[j]<b[minIndex]) minIndex=j;
            }

            if(minIndex!=i){
                long long temp=b[i];
                b[i]=b[minIndex];
                b[minIndex]=temp;
                swaps++;
            }
        }

        if(shifts<swaps) cout<<"Insertion Sort"<<endl;
        else if(swaps<shifts) cout<<"Selection Sort"<<endl;
        else cout<<"Tie"<<endl;
    }
}
