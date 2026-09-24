#include <bits/stdc++.h>
using namespace std;
int main() {
    /*Given marks of a student, print on the screen:
Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.*/
    int m;
    cin >> m;
    if (m>=90) {
        cout << "Grade A";
    }
    else if (m>=70) {
        cout << "Grade B";
    }
    else if (m>=50) {
        cout << "Grade C";
    }
    else if (m>=35) {
        cout << "Grade D";
    }
    else {
        cout << "Fail";
    }
    return 0;
    // for multiple conditions use &&
}