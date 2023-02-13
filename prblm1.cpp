#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "PRA12Ga782d45601$3";
    int sum = 0;
    for(int i=0; i<str.size(); i++){
        if(isdigit(str[i])){
            sum+=str[i]-'0';
        }
    }
    cout<<sum;
    return 0;
}