//print name 5 times
//2 inputs- name and how many times
#include <bits/stdc++.h>
using namespace std;
string name;
int n;
void printing(int i, int n) {
    if (i>n) return;
    cout << name << endl;
    printing(i+1,n);
}
int main() {
    cin >> name;
    cin >> n;
    printing(1,n);
    return 0;
}