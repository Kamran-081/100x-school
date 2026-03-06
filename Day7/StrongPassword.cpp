#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    int lower=0,upper=0,digit=0,special=0;

    if(s.size()!=10){
        cout<<"Weak";
        return 0;
    }

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z') lower=1;
        else if(s[i]>='A' && s[i]<='Z') upper=1;
        else if(s[i]>='0' && s[i]<='9') digit=1;
        else special=1;
    }

    if(lower && upper && digit && special) cout<<"Strong";
    else cout<<"Weak";
}
