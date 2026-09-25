//check if a string is palindrome
#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(int i,string s) {
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return check_palindrome(i+1,s);
}
int main() {
    string s;
    getline(cin,s);
    string t;
    for (char c : s) {
       if (isalnum(c))t += tolower(c);
    }
    cout << check_palindrome(0,t);
    return 0; 
}