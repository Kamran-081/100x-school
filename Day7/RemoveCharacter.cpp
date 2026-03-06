#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char x;
    cin>>s;
    cin>>x;

    for(int i=0;i<s.size();i++){
        if(s[i]!=x) cout<<s[i];
    }
}
