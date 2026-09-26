//character hashing
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int hash[256]={0};
    for (char c : s) {
        hash[c]+=1;
    }

    int q;
    cin>>q;
    while (q--) {
        char check;
        cin >> check;
        cout << hash[check];
    }
    return 0;
}