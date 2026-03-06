#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char c1,c2;
    cin>>s;
    cin>>c1>>c2;

    for(int i=0;i<s.size();i++){
        if(s[i]==c1) s[i]=c2;
    }

    cout<<s;
}
