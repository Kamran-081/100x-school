#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int maxLen=0,cur=0;

    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(cur>maxLen) maxLen=cur;
            cur=0;
        }else{
            cur++;
        }
    }

    if(cur>maxLen) maxLen=cur;

    cout<<maxLen;
}
